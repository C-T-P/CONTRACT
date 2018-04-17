# c_1 insertion between leg 1 and 2
./Contract k_[103,3]*k_[104,4]*t_[201,101,1]*t_[201,2,102]*k_[101,103]*k_[102,104]

# c_2 insertion between leg 1 and 2
./Contract k_[103,3]*k_[104,4]*t_[201,101,1]*t_[201,2,102]*c_[-0.1666667,0]*k_[101,103]*k_[102,104]+k_[103,3]*k_[104,4]*t_[201,101,1]*t_[201,2,102]*c_[0.5,0]*k_[101,102]*k_[103,104]

# c_1 insertion between leg 1 and 3
./Contract k_[102,2]*k_[104,4]*t_[201,101,1]*t_[201,3,103]*k_[101,103]*k_[102,104]

# c_2 insertion between leg 1 and 3
./Contract k_[102,2]*k_[104,4]*t_[201,101,1]*t_[201,3,103]*c_[-0.1666667,0]*k_[101,103]*k_[102,104]+k_[102,2]*k_[104,4]*t_[201,101,1]*t_[201,3,103]*c_[0.5,0]*k_[101,102]*k_[103,104]

# c_1 insertion between leg 1 and 4
./Contract k_[102,2]*k_[103,3]*t_[201,101,1]*t_[201,104,4]*k_[101,103]*k_[102,104]

# c_2 insertion between leg 1 and 4
./Contract k_[102,2]*k_[103,3]*t_[201,101,1]*t_[201,104,4]*c_[-0.1666667,0]*k_[101,103]*k_[102,104]+k_[102,2]*k_[103,3]*t_[201,101,1]*t_[201,104,4]*c_[0.5,0]*k_[101,102]*k_[103,104]