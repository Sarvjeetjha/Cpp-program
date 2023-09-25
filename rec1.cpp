// import csv
// # f=open("C:\\Users\\HP\\Downloads\\trial.csv")

// # print(f.readline())
// a=[]
// with open('C:\\Users\\HP\\OneDrive\\Desktop\\Book2.csv') as csvfile:
//     Reader=csv.reader(csvfile)
//     # print(list(Reader))
//     for row in Reader:
//         a.append(row)
//         print('Rows are',row)
// num_attributes=6
// hypothesis=['0']*num_attributes
// print('\n The initial value of hypothesis')
// print("Hypothesis is",hypothesis)

// for j in range(0,num_attributes):
//     hypothesis[j]=a[0][j]
//     print('\n new',hypothesis)
// print('\n Find S Finding a mximully Specific Hypothesis \n ')
// print("length of a",len(a))
// for i in range(0,len(a)):
//     if a[i][6]=='Yes':
//         for j in range(0,num_attributes):
//             if(a[i][j]!=hypothesis[j]):
//                 hypothesis[j]='?'
//             else:
//                 hypothesis[j]=a[i][j]
//         print(f"For training instatnceNO;{i} the hypothesis is  {hypothesis}")
// print("\n The Maximally Specific Hypothesis for a given Training example:\n")
// print(hypothesis)

