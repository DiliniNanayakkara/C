#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	int power;
	struct node *link;
	
};

struct node *root1=NULL;
struct node *root2=NULL;
struct node *poly=NULL;
struct node *poly2=NULL;

int Adend1(int x,int y)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->power=y;
	temp->link=NULL;
	
	if(root1==NULL)
	{
		root1=temp;
	}
	else
	{
		struct node *p;
		p=root1;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		
		p->link=temp;
	}	
}

int Display1()
{
	struct node *p;
	p=root1;
	
	while(p!=NULL)
	{	
		printf("%d X ^%d +\t",p->data,p->power);
		p=p->link;
	}

	printf("\n");

}

int Adend2(int x,int y)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->power=y;
	temp->link=NULL;
	if(root2==NULL)
	{
		root2=temp;
	}
	else
	{
		struct node *p;
		p=root2;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		
		p->link=temp;
	}	
}

int Display2()
{
	struct node *p;
	p=root2;

	
	while(p!=NULL)
	{
		printf("%d X ^%d\t+\t",p->data,p->power);
		p=p->link;
	}
}

int Displaypoly()
{
	struct node *p;
	p=poly;
	
	while(p!=NULL)
	{
		
		printf("%d X ^%d +\t",p->data,p->power);
		p=p->link;	
	}
	printf("\n");
}

int DisplayMulty()
{
	struct node *p;
	p=poly2;
	
	while(p!=NULL)
	{
	//	printf("\n****&&&&&\n");
		printf("%d X ^%d +\t",p->data,p->power);
		p=p->link;	
	}
	
	printf("\n");
}

void polyadd() 
{ 
	struct node *p1,*p2,*temp;
	p1=root1;
	p2=root2;

	while (p1!=NULL && p2!=NULL) 
    { 
    	temp = (struct node*)malloc(sizeof(struct node));
        // If power of 1st polynomial is greater then 2nd, then store 1st as it is 
        // and move its pointer 
        if(p1->power > p2->power) 
        { 
            temp->power = p1->power; 
            temp->data = p1->data; 
            p1 = p1->link;
        } 
          
        // If power of 2nd polynomial is greater then 1st, then store 2nd as it is 
        // and move its pointer 
        else if(p1->power < p2->power) 
        { 
            temp->power = p2->power; 
            temp->data = p2->data; 
            p2 = p2->link; 
        } 
          
        // If power of both polynomial numbers is same then add their coefficients 
        else
        { 
            temp->power = p1->power; 
            temp->data = p1->data+p2->data; 
            p1 = p1->link; 
            p2 = p2->link; 
            temp->link = NULL;
            //printf("\n*****%d****",temp->data);
        }
        
        // Dynamically create new node 
        if(poly==NULL)
		{
	    	poly=temp;
        }
        
		else //if (poly!=NULL)
		{
			struct node *p;
			p=poly;
			while(p->link!=NULL)
			{
				p=p->link;
			}
			p->link=temp;
		}	
    } 
    
	/*while(p1!=NULL || p2!=NULL) 
    { 
        if(p1->link!=NULL) 
        { 
            poly->power = p1->power; 
            poly->data = p1->data; 
            p1 = p1->link; 
        }
        
        if(p2->link!=NULL) 
        { 
            poly->power = p2->power; 
            poly->data = p2->data; 
            p2 = p2->link; 
        } 
        
       	if(poly==NULL)
	   	{
	    	poly=temp;
		}
		
		else
		{
			struct node *p;
			p=poly;
			while(p->link!=NULL)
			{
				p=p->link;
			}
			
			p->link=temp;
		}	
    }*/
	 
} 

int multiply() 
{ 
  
    // Create two pointer and store the 
    // address of 1st and 2nd polynomials 
    struct node *p1, *p2,*temp; 
    p1 = root1; 
    p2 = root2; 
    while (p1 != NULL)
	{ 
        while (p2 != NULL)
		{ 
        	temp = (struct node*)malloc(sizeof(struct node));
            
       // printf("\n*****\n");
            int data, power; 
  
            // Multiply the coefficient of both 
            // polynomials and store it in coeff 
            data = p1->data * p2->data; 
  
            // Add the powerer of both polynomials 
            // and store it in power 
            power = p1->power + p2->power; 
  
            // Invoke addnode function to create 
            // a newnode by passing three parameters 
            temp = (struct node*)malloc(sizeof(struct node));
            
			temp->data=data;
			temp->power=power;
			temp->link=NULL;
			if(poly2==NULL)
			{
			 	poly2=temp;
			 	//printf("\n&&&&&&\n");	
			}
			 
			else
			{
			 	struct node *p;
			 	p=poly2;
			 //	printf("%d",p);
			 	while(p->link!=NULL)
				{
			 		p=p->link;
			 	//	printf("\n########\n");
			 	}
				// p->link=temp;
			}
  
            // move the pointer of 2nd polynomial 
            // two get its next term 
            p2 = p2->link; 
        }
  
        // Move the 2nd pointer to the 
        // starting point of 2nd polynomial
		 
       // p2 = poly2; 
  
        // move the pointer of 1st polynomial 
        p1 = p1->link; 
    } 
  
    // this function will be invoke to add 
    // the coefficient of the elements 
    // having same powerer from the resultant linked list 
   // removeDuplicates(); 
    //return poly2; 
} 
/*int removeDuplicates() 
{ 
    struct node *p1, *p2, *dup; 
    p1 = poly2; 
  
    
    while (p1 != NULL && p1->link != NULL) { 
        p2 = p1; 
  
        // Compare the picked element 
        // with rest of the elements 
        while (p2->link != NULL) { 
  
            // If powerer of two elements are same 
            if (p1->power == p2->link->power) { 
  
                // Add their coefficients and put it in 1st element 
                p1->data = p1->data + p2->link->data; 
                dup = p2->link; 
                p2->link = p2->link->link; 
  
                // remove the 2nd element 
                free(dup); 
            } 
            else
                p2 = p2->link; 
        } 
        p1 = p1->link; 
    } 
} */
  
// Driver Code 

int main(){
	
	Adend1(3,2);
	Adend1(4,1);
//	Adend1(5,0);
	printf("1st Number\n");
	Display1();
	Adend2(6,2);
	Adend2(3,1);
	Adend2(6,0);
	printf("\n2nd Number\n");
	Display2();
	
//	poly = (struct node *)malloc(sizeof(struct node)); 
	printf("\n\n");
	polyadd();
	printf("\n\n");
	
	printf("\nAfter Adding\n\n");
	Displaypoly();
	multiply();
	printf("\n\nAfter multipication\n\n");
	DisplayMulty();
	
	return 0;
	
//	Addpoly();
}
