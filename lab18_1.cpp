#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect,Rect);

int main(){
	Rect a,b;
	double over;
	cout << "Please input Rect 1 (x y w h): ";
	cin >> a.x >> a.y >> a.w >> a.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin >> b.x >> b.y >> b.w >> b.h;
	over=overlap(a,b);
	
	cout << "Overlap area = " << over;	
	return 0;
}

double overlap(Rect a,Rect b){
	double overx,overy,over;
	overx=min(a.x+a.w,b.x+b.w)-max(a.x,b.x);
	overy=abs(min(a.y,b.y)-max(a.y-a.h,b.y-b.h));
	//cout << overx <<"\n" << overy<< "\n";
	over = overx*overy;
	if(over<0) over=0;
	return over;
}
