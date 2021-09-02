#include<bits/stdc++.h> 
using namespace std; 
int daynum(int year) 
{ 
	year = year- 1 ; 
	return ( year + year/4 - year/100 + year/400 + 1) % 7; 
}
string monthname(int monthnum)
{ 
	string months[] = {"January", "February", "March", 
					"April", "May", "June", 
					"July", "August", "September", 
					"October", "November", "December"
					}; 

	return (months[monthnum]); 
} 


void printCalendar(int year) 
{ 
    int monthnum[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; 
    cout<<"Calender - "<<year;
	int days; 
	int current = daynum (year); 
	for (int i = 0; i < 12; i++) 
	{ 
		if( i==1 )
			if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
				days = 29;
			else	
				days = monthnum[i];
		else
			days = monthnum[i];
     
  		cout<<endl<<"  ------------"<<monthname(i)<<"-------------"<<endl; 
		cout<<"  Sun  Mon  Tue  Wed  Thu  Fri  Sat"<<endl; 
		int k; 
		for (k = 0; k < current; k++) 
			cout<<"     "; 

		for (int j = 1; j <= days; j++) 
		{ 
            k++;
			cout<<setw(5)<<j; 

			if (k > 6) 
			{ 
				k = 0; 
				cout<<endl; 
			} 
		} 

		if (k) 
			cout<<endl; 

		current = k; 
	} 

	return; 
}
int main() 
{ 
    system("cls");
int year;
cout<<"Enter year: " ;
cin>>year;

printCalendar(year); 

	return (0); 
} 

