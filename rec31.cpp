// import numpy as np
// import matplotlib.pyplot as plt
// x = np.array([43,21,25, 42, 57, 59])
// y = np.array([99, 65, 79, 75, 87, 81])


// plt.scatter(x, y)
// plt.title("Linear Regression Model")
// plt.xlabel("Age (x-variable)")
// plt.ylabel("Glucose Level (y-variable)")
// plt.show()

// size_x = np.size(x)
// size_y=np.size(y)
// n=size_x
// print("******************************")
// print("Size of weight (x-variable) is:", size_x)
// print("Size of height (y-variable) is:", size_y)
// print("******************************")

// # Sum of x and y vector
// sum_col1_x = np.sum(x)
// sum_col2_y = np.sum(y)
// print("\n******************************")
// print("sum of x-variable is:", sum_col1_x)
// print("sum of y-variable is:", sum_col2_y)
// print("******************************")


// # Mean of x and y vector
// m_x = np.mean(x) # or (sum_x)/size_x
// m_y = np.mean(y) # or (sum_y)/size_y
// print("\n________________________________________________________")
// print("Step 1: Calculate the sum of Column 1 and Column 2")
// print("*******************************************************")
// print("mean of x-variable is:", m_x)
// print("mean of y-variable is:", m_y)
// print("________________________________________________________")

// # Sum of column 3, 4, and 5
// sum_col3_xy = np.sum(y*x)
// sum_col4_xx = np.sum(x*x)
// sum_col5_yy = np.sum(y*y)
// print("\n__________________________________________________________________")
// print("Step 2: Calculate the sum of Column 3 , Column 4, and Column 5")
// print("*******************************************************")
// print("Sum of column 3 (xy) is:", sum_col3_xy)
// print("Sum of column 4 (xx) is:", sum_col4_xx)
// print("Sum of column 5 (yy) is:", sum_col5_yy)
// print("__________________________________________________________________")

// # Calculate regression coefficient b0
// b0_num=(sum_col2_y*sum_col4_xx)-(sum_col1_x*sum_col3_xy)
// b0_den= (n*sum_col4_xx)-(sum_col1_x*sum_col1_x)
// b0=b0_num/b0_den # 494979/7445
// print("\n 1. First *Estimated* Regression Co-efficient *b0* is: ", b0)


// # Calculate regression coefficient b1
// b1_num=(n*sum_col3_xy)-(sum_col1_x*sum_col2_y)
// b1_den= (n*sum_col4_xx)-(sum_col1_x*sum_col1_x)
// b1=b1_num/b1_den # 2868/7445
// print("\n 2. Second *Estimated* Regression Co-efficient *b1* is: ", b1)

// # Linear Regression Equation
// y_pred = b0 + b1*x

// print("\n")

// print("y_predicted values", y_pred)
// print("y_actual values", y)

// print("\n")
// print("value of y at age (x)=20 is", (b1*20)+b0)

// # Ploting the actual points
// plt.scatter(x, y, color = "m",
//                marker = "o", s = 30)
// plt.xlabel("Age (x-variable)")
// plt.ylabel("Glucose Level (y-variable)")

// # Ploting the estimated predicted line
// plt.plot(x, y_pred, color = "g")
// plt.title("Scatter-plot of the points along with the estimated regression line")
// plt.show()




















// from sklearn import metrics
// from sklearn.linear_model import LinearRegression
// from sklearn.model_selection import train_test_split
// import numpy as np
// import pandas as pd
// import matplotlib.pyplot as plt

// dataset = pd.read_csv('C:\\Users\HP\\Downloads\\Salary_Data.csv')
// dataset.head()

// print("dataset is: \n", dataset)

// # DEPENDENT AND INDEPENDENT VARIABLES
// X = dataset.iloc[:, :-1].values  # independent variable array
// y = dataset.iloc[:, 1].values  # dependent variable vector
// # X1 = dataset.iloc[:,0].values  #independent variable array
// print("X \n", X)
// print("y \n", y)
// # print("X1 \n", X1)

// # DATA SPLITTING 70:30 RATIO OR 80:20 RATIO
// X_train, X_test, y_train, y_test = train_test_split(
//     X, y, test_size=0.20, random_state=0)

// print("\n")
// print("****************************")
// print("SHAPE OF X_TRAIN:", X_train.shape)
// print("SHAPE OF Y_TRAIN:", y_train.shape)
// print("SHAPE OF X_TEST:", X_test.shape)
// print("SHAPE OF Y_TEST:", y_test.shape)
// print("****************************")
// print("\n")

// # Fitting linear regression model into the training set
// regressor = LinearRegression()
// # actually produces the linear eqn for the data
// regressor.fit(X_train, y_train)

// print("\n")
// print("****************************")
// print("coefficient of linear regression", regressor.coef_)
// print("intercept of linear regression", regressor.intercept_)
// print("****************************")
// print("\n")

// # Predicting the test set results
// y_pred = regressor.predict(X_test)
// print("****************************")
// print("y_pred value is:", y_pred)
// print("****************************")

// print("\n")

// print("****************************")
// print("y_test value is:", y_test)
// print("****************************")
// print("\n")

// # Visualizing the results

// # PLOT FOR TRAIN

// plt.scatter(X_train, y_train, color='red')  # plotting the observation line


// # plotting the regression line
// plt.plot(X_train, regressor.predict(X_train), color='blue')

// # stating the title of the graph
// plt.title("Salary vs Experience (*Training set*)")

// plt.xlabel("Years of experience")  # adding the name of x-axis
// plt.ylabel("Salaries")  # adding the name of y-axis
// plt.show()  # specifies end of graph


// # plot for the TEST

// plt.scatter(X_test, y_test, color='red')
// # plotting the regression line
// plt.plot(X_train, regressor.predict(X_train), color='blue')


// plt.title("Salary vs Experience (*Testing set*)")

// plt.xlabel("Years of experience")
// plt.ylabel("Salaries")
// plt.show()

// # model evaluation
// print("***********************************")
// print("Mean Absolute Error is:", metrics.mean_absolute_error(y_test, y_pred))
// print("Mean Squared Error is:", metrics.mean_squared_error(y_test, y_pred))
// print("Root Mean Squared Error is:", np.sqrt(
//     metrics.mean_absolute_error(y_test, y_pred)))
// print("***********************************")