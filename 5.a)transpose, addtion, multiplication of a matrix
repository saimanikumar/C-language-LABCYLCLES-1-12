#include<stdio.h>
void read(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
}
void write(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
    }
}
void main()
{
    int choice;
    int a[10][10],b[10][10],c[10][10],i,j,k;
    int m,n,m1,n1,m2,n2;
    do{
        printf("\nEnter your choice\n1.Transpose of matrix\n2.Addition of matrices\n3.Multiplication of matrices\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
              printf("Enter the sizes:");
              scanf("%d %d",&m,&n);
              printf("Enter the elements:\n");
              read(a,m,n);
              printf("\nEntered matrix is:\n");
              write(a,m,n);
              for(i=0;i<m;i++)
              for(j=0;j<n;j++){
                 b[i][j]=a[j][i];
              }
              printf("\nThe transpose of the given matrix is:\n");
              write(b,m,n);
              break;
        case 2:
    printf("Enter the sizes:");
    scanf("%d %d",&m,&n);
    printf("Enter the elements:\n");
    read(a,m,n);
    read(b,m,n);
    printf("The entered matrices are:\n");
    write(a,m,n);
    printf("\n");
    write(b,m,n);
    printf("\nThe addition of two matrices are:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        c[i][j]=a[i][j]+b[i][j];
    write(c,m,n);
    break;
        case 3:
    printf("Enter the size of both matrices:");
    scanf("%d %d %d %d",&m1,&n1,&m2,&n2);
    if(n1==m2){
        printf("Enter the elements:\n");
        read(a,m1,n1);
        read(b,m2,n2);
        printf("The entered matrices are:\n");
        write(a,m1,n1);
        printf("\n");
        write(b,m2,n2);
        for(i=0;i<m1;i++)
        for(j=0;j<n2;j++){
            c[i][j]=0;
            for(k=0;k<n1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
        printf("\nThe multiplication of two matrices is:\n");
    write(c,m1,n2);
    }
    else
        printf("The matrix multiplication is not possible.");
        break;
        }
    }while(choice<4);
}
