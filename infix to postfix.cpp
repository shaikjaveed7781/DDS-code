
#include<iostream>
#include <ctype.h>
using namespace std;
#define size 100
int stack[size];
int top = -1;
void push(char c){
top++;
stack[top] = c;
}
int precedene(char c){
if(c=='^'){
return 3;
}
else if(c== '/' || c=='*'){
return 2;
}
else if(c == '+' || c=='-'){
return 1;
}
else{
return 0;
}
}
void infixToPostFix(char infix[], char postfix[]){
int i=0;
int j=0;
while(infix[i]!='\0'){
char ch = infix[i];

if(isalnum(ch)){ 
postfix[j] = ch;
j++;
}

else if(ch == '('){
push(ch);
}

else if(ch == ')'){
while(stack[top]!='('){
char popped = stack[top];
postfix[j] = popped;
top--;
j++;
}
top--;
}

else{
while(top!=-1 && precedene(stack[top]) >= precedene(ch) ){
char popped = stack[top];
postfix[j] = popped;
j++;
top--;
}
push(ch);
}
i++;
}

while(top!=-1){
postfix[j] = stack[top];
top--;
j++;
}
postfix[j] = '\0'; 
}
int main(){
char infix[size], postfix[size];
cout<<"enter the pattern : ";
cin>>infix;
infixToPostFix(infix, postfix);
cout<<endl<<postfix;
}
