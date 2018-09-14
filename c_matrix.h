#ifndef C_MATRIX_H
#define C_MATRIX_H

#include<vector>
#include<complex>
#include<cmath>
#include "colourtools.h"

using namespace std;

typedef vector<vector<complex<double>>> matrix;

class c_matrix {
    vector<vector<complex<double>>> m_mat;
    public:
    c_matrix() {
        m_mat=vector<vector<complex<double>>>();
    }
    c_matrix(size_t dim) {
        for (size_t i(0);i<dim;i++)
            m_mat.push_back(vector<complex<double>>(dim,0.));
    }
    size_t dim() {
        return m_mat.size();
    }
    vector<complex<double>>& operator[](size_t i) {
        return m_mat[i];
    }
    vector<complex<double>> operator[](size_t i) const {
        return m_mat[i];
    }
    c_matrix operator*(c_matrix m_mat2) {
        size_t dim(m_mat2.dim());
        c_matrix m_matr(dim);
        if (dim==m_mat.size()) {
            for (size_t i(0);i<dim;++i)
                for (size_t j(0);j<dim;++j)
                    for (size_t k(0);k<dim;++k)
                        m_matr[i][j]+=m_mat[i][k]*m_mat2[k][j];
        }
        else {
            cout<<"Error mutliplying square matrices "<<&m_mat<<" and "<< &m_mat2<<": mismatch of dimensions: "<<m_mat.size()<<" vs. "<<dim<<endl;
            exit(EXIT_FAILURE);
        }
        return m_matr;
    }
    c_matrix operator+(c_matrix m_mat2) {
        size_t dim(m_mat2.dim());
        c_matrix m_matr(dim);
        if (dim==m_mat.size()) {
            for (size_t i(0);i<dim;++i)
                for (size_t j(0);j<dim;++j)
                    m_matr[i][j]=m_mat[i][j]+m_mat2[i][j];
        }
        else {
            cout<<"Error adding square matrices "<<&m_mat<<" and "<< &m_mat2<<": mismatch of dimensions: "<<m_mat.size()<<" vs. "<<dim<<endl;
            exit(EXIT_FAILURE);
        }
        return m_matr;
    }
    void operator+=(c_matrix m_mat2) {
        size_t dim(m_mat2.dim());
        if (dim==m_mat.size()) {
            for (size_t i(0);i<dim;++i)
                for (size_t j(0);j<dim;j++)
                    m_mat[i][j]+=m_mat2[i][j];
        }
        else {
            cout<<"Error adding square matrices "<<&m_mat<<" and "<< &m_mat2<<": mismatch of dimensions: "<<m_mat.size()<<" vs. "<<dim<<endl;
            exit(EXIT_FAILURE);
        }
    }
    void print() {
        size_t dim(m_mat.size());
        for (size_t i(0);i<dim;i++) {
            for (size_t j(0);j<dim;j++)
                cout<<m_mat[i][j]<<"\t";
            cout<<endl;
        }
    }
};

#endif
