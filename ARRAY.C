#include<stdio.h>
#include<conio.h>
#include<process.h>
 //exit(1) function include header file process.h

     void main()
     {
      int array[5][5],n,m,i,j,choice,array1[5][5],c;
      void getdata(int[5][5],int,int);    //declaring function for input data
      void putdata(int[5][5],int,int);
      void transpose(int[5][5],int ,int);
      void updiagonal(int[5][5],int ,int);
      void lowerdiagonal(int [5][5],int ,int);  //declaring function for output data
       // declaring function for recursive bi ary search and complexity of binary search is order of O(n^2)
	clrscr();

      printf("enter the rows and colum of array");
      scanf("%d%d",&n,&m);
      getdata(array,n,m);
      putdata(array,n,m);

       while(1)
       {
	printf("1 for transpose of matix\n");
	printf("2 for upper diagonal of matix\n");
	printf(" 3 for lower diagonal of matix\n");
	printf("4 for exit\n");
	 printf("\n enter your choice \n");
	 scanf("%d",&choice);
	  switch(choice)
	  {
	  case 1:
		 printf("transpose of matix");
		 getdata(array,n,m);
		 transpose(array, n, m);
		 break;
	   case 2:
		 printf("upper diagonal matix\n");
		 updiagonal(array,n,m);
		 break;
	    case 3:
		  printf("lower diagonal matix\n");
		  lowerdiagonal(array,n,m);
		  break;

	  case 4:
	      exit(1);
	    default:
	     printf("error input\n");
	  }

	}

      }

      void getdata(int x[5][5] ,int n,int m)          //function definition for input data
	  {
	    int i,j;
	    printf("enter the value of array\n");
	    for(i=0;i<n;i++)
	     {
	     for(j=0;j<m;j++)
	     {

	     scanf("%d",&x[i][j]);
	     }
	   }
	   }
	void putdata(int x[5][5],int n,int m)       // function definition for output data
	  {
	    int i,j;
	    for(i=0;i<n;i++)
	     {
	      for(j=0;j<m;j++)
	      {
	     printf("%d\t",x[i][j]);
	     }
	     printf("\n");
	   }
	   }

	    void transpose( int x[5][5],int n,int m)
	    {
	      int i,j,c;
	       for(i=0;i<n;i++)
	       {
		for(j=0;j<m;j++)
		{
	       //	  printf("%d\t",x[j][i]);
		//  }
		c=x[i][j];
	       x[i][j]=x[j][i];
		x[j][i]=c;
		 printf("%d\t",x[j][i]);
		  }
		  printf("\n");
		  }
		  }
	    void updiagonal (int x[5][5],int n,int m)
	    {
	      int i,j;
	      for(i=0;i<n;i++)
	      {
	       for(j=0;j<m;j++)
	       {
	       if(i<=j)
	       {
	      //	printf("upper diagonal marix\n");
		printf("%d\t",x[i][j]);
		}
	      //	printf("\n");
		}
		}
		}

		 void lowerdiagonal (int x[5][5],int n,int m)
	    {
	      int i,j;
	      for(i=0;i<n;i++)
	      {
	       for(j=0;j<m;j++)
	       {
	       if(i>=j)
	       {
	      //	printf("upper diagonal marix\n");
		printf("%d\t",x[i][j]);
		}
	      //	printf("\n");
		}
		}
		}


