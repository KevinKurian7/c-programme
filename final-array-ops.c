/*Programme to perform srray insertion.array linear search,array,deletion,
array traversal,array deletion and array sorting IN C*/
#include<stdio.h>

int insert(int arr[],int size);
int search(int arr[],int size,int item);
int travprint(int arr[],int size);
int delete(int arr[],int size);
int sort(int[],int size);

 int main()
{
    int arr[100],size;
    int choice,h=0,z;
        int item;
    printf("\t\tPROGRAMME TO PERFORM ARRAY OPS");

    if(h==0)
	  {
	    printf("\n\tEnter the initial size of the array . \n");
	    scanf("%d",&size);
	    printf("\n");
	    printf("Enter the array elements. \n");
	    for(int i=0;i<size;i++)
	      {
	      	scanf("%d",&arr[i]);
		  }
	  }
    do{
    /*Below lines are for displaying the menu*/
    
    printf("\n\n\tOPTIONS");
    printf("\n\t1. insert element to array");
    printf("\n\t2. search element in array");

    printf("\n\t3. print the elements in the array (traversal implementation)");
    printf("\n\t4.delete ement in array ");
    printf("\n\t5. sort);
    printf("\n\t6. exit");
    printf("\n");
      /*ask a choice here*/
    printf("\n\n\tenter your choice");
    scanf("%d",&choice);
    h=1;


  
    switch(choice)
    {
    case 1:
       
        insert(arr,size);

    
        break;
    case 2:
    
        printf("\nenter the element you want to search ");
        scanf("%d",&item);    
        search(arr,size,item);   
        break; 
    case 3:
        travprint(arr,size);
        break;
    case 4:
        delete(arr,size);
        break;      
  
    case 5:
        sort(arr,size);
        break;
    default:
        printf("invalid input");
        break;
    }
    printf("\n");  
	printf("Do you want to continue ? \n");
	printf("Enter 1 to continue or enter 0 to exit. \n");
	scanf("%d",&z);

    /*switch*/

    




    }while(z!=0);
	
    return 0;

}


int insert(int arr[],int size)

{
    int item,location;
     printf("\nEnter the element you wish to insert ");
        scanf("%d",&item);
        printf("\nEnter the location where you wish to insert  the element");
        scanf("%d",&location);
        location=location-1;
        size=size+1;
        for(int i=size-1;i>=location;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[location]=item;
        printf("\n Updated array :");
        for(int i=0;i<=size-1;i++)

        {
            printf("%d\t",arr[i]);
            
        }

     return 0;
    
}

/*search*/
int search(int arr[],int size,int item)
{
    int pos=-1,found=0;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]==item)

        {   pos=i+1;
            found=1;

            break;
        }
    
    }
    if(found==1)
    {
     printf("item found at pos %d",pos);
  
        
    }
    else if(found==0)
    {
        printf("\nIT DOES NOT EXIST");
        
    }
   return 0; 
}



/*USE TRAVERSAL METHOD TO PRINT OUT THE ELEMENTS IN ARRAY*/
int travprint(int arr[],int size)
{
    
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}



int delete(int arr[],int size)
{
    int element,pos;
    printf("\nenter element to deleted");
    scanf("%d",&element);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            pos=i+1;
            
            break;
        }

    }
   
    size=size-1;
    for(int j=pos-1;j<size;j++)
    {
        arr[j]=arr[j+1];
    }
     printf("updated array");
    travprint(arr,size);
    return 0;

}

/*SORTING*/
int sort(int arr[],int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    printf("\nupdated array");
    travprint(arr,size);
}