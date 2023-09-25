import numpy as np

x=np.array([1,2,3,4,5,6,7])
y=np.array([1, 4, 15,30,9,10,11])
print("********************************")
print("Independent variable x is \n:", x)
print("Dependent variable y is \n:", y)
print("********************************")

#Declare all the variables
n=np.size(x)
sum_col1_x=np.sum(x)
sum_col2_y=np.sum(y)
sum_col3_xy=np.sum(x*y)
sum_col4_xx=np.sum(x*x)
sum_col5_x3=np.sum(x*x*x)
sum_col6_x4=np.sum(x*x*x*x)
sum_col7_x2y=np.sum(x*x*y)

# Print all the variables
print("********************************")
print("number of rows are:",n)
print("sum_col1_x is:", sum_col1_x)
print("sum_col2_y is:", sum_col2_y)
print("sum_col3_xy is:", sum_col3_xy)
print("sum_col4_xx is:", sum_col4_xx)
print("sum_col5_x3 is:", sum_col5_x3)
print("sum_col6_x6 is:", sum_col6_x4)
print("sum_col7_x2y is:", sum_col7_x2y)
print("********************************")

# Declare matrix X and Calculate the determinant of matrix 
X=np.array([[n, sum_col1_x],
            [sum_col1_x, sum_col4_xx]])
det_X=np.linalg.det(X)
print("********************************")
print("Matrix X is",X)
print("shape of matrix X is", X.shape)
print("Determinant of matrix X is:", det_X)
print("********************************")# Declare matrix Y
Y=np.array([[sum_col2_y],
            [sum_col3_xy]])
print("********************************")
print("Matrix Y is",Y)
print("shape of matrix Y is", Y.shape)
print("********************************")#Compute the inverse of matrix 
X_inverse=np.linalg.inv(X)
print("********************************")
print("Inverse matrix X is:",X_inverse)
print("Shape of inverse matrix is",X_inverse.shape)
print("********************************")#Matrix multiplication between X_inverse and 
A=np.matmul(X_inverse,Y)
print("********************************")
print("Polynomial Co-efficients matrix A is", A)
print("shape of matrix A is", A.shape)
print("********************************")#Individual polynomila coefficients
a0=A[0]
a1=A[1]
# a2=A[2]
print("********************************")
print("Polynomial co-efficient *a0* is:", a0)
print("Polynomial co-efficient *a1* is:", a1)
# print("Polynomial co-efficient *a2* is:", a2)
print("********************************")
# 




# // # // # import numpy as np
# // # // # import pandas as pd
# // # // # import matplotlib.pyplot as plt
# // # // # X = np.arange(0, 30)
# // # // # print("X is:", X.shape)
# // # // # X=X.reshape(-1,1)
# // # // # print("X is:", X.shape)
# // # // # y = [3, 4, 5, 7, 10, 8, 9, 10, 10, 23, 27, 44, 50, 63, 67, 60, 62, 70, 75, 88, 81, 87, 95, 100, 108, 135, 151, 160, 169, 179]
# // # // # plt.figure(figsize=(10,6))
# // # // # plt.scatter(X, y)
# // # // # plt.show()

# // # // # from sklearn.model_selection import train_test_split
# // # // # X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=0)


# // # // # #Fitting linear regression model into the training set
# // # // # from sklearn.linear_model import LinearRegression
# // # // # regressor = LinearRegression()
# // # // # regressor.fit(X_train,y_train) #actually produces the linear eqn for the data

# // # // # print("\n")
# // # // # print("****************************")
# // # // # print("coefficient of linear regression",regressor.coef_)
# // # // # print("intercept of linear regression",regressor.intercept_)
# // # // # print("****************************")
# // # // # print("\n")

# // # // # #Predicting the test set results
# // # // # y_pred = regressor.predict(X_test)
# // # // # print("****************************")
# // # // # print("y_pred value is:", y_pred)
# // # // # print("****************************")

# // # // # print("\n")

# // # // # print("****************************")
# // # // # print("y_test value is:", y_test)
# // # // # print("****************************")
# // # // # print("\n")

# // # // # #Visualizing the results

# // # // # #PLOT FOR TRAIN

# // # // # plt.scatter(X_train, y_train, color='red') # plotting the observation line


# // # // # plt.plot(X_train, regressor.predict(X_train), color='blue') # plotting the regression line

# // # // # plt.title("Salary vs Experience (*Training set*)") # stating the title of the graph

# // # // # plt.xlabel("Years of experience") # adding the name of x-axis
# // # // # plt.ylabel("Salaries") # adding the name of y-axis
# // # // # plt.show() # specifies end of graph





# // # // # #plot for the TEST

# // # // # plt.scatter(X_test, y_test, color='red')
# // # // # plt.plot(X_train, regressor.predict(X_train), color='blue') # plotting the regression line



# // # // # plt.title("Salary vs Experience (*Testing set*)")

# // # // # plt.xlabel("Years of experience")
# // # // # plt.ylabel("Salaries")
# // # // # plt.show()

# // # // # #model evaluation
# // # // # from sklearn import metrics
# // # // # print("***********************************")
# // # // # print("Mean Absolute Error is:", metrics.mean_absolute_error(y_test, y_pred))
# // # // # print("Mean Squared Error is:", metrics.mean_squared_error(y_test, y_pred))
# // # // # print("Root Mean Squared Error is:", np.sqrt(metrics.mean_squared_error(y_test, y_pred)))
# // # // # print("***********************************")


# // # // # from sklearn.preprocessing import PolynomialFeatures
# // # // # poly = PolynomialFeatures(degree=1, include_bias=False)
# // # // # poly_features = poly.fit_transform(X.reshape(-1, 1))
# // # // # print(poly_features)
# // # // # print(poly_features.shape)
# // # // # from sklearn.linear_model import LinearRegression
# // # // # poly_reg_model = LinearRegression()

# // # // # poly_reg_model.fit(poly_features, y)

# // # // # y_predicted = poly_reg_model.predict(poly_features)

# // # // # plt.figure(figsize=(10, 6))
# // # // # plt.title("Polynomial Regression", size=16)
# // # // # plt.scatter(X, y)
# // # // # plt.plot(X, y_predicted, c="red")
# // # // # plt.show()