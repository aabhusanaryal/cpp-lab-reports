#include<iostream>
class str{
    private:
        int n;
        char *a;
    public:
        str(int size,const char *b){
            n=size;
            a=new char[n];
            int i=0;
            while(b[i]!='\0'){
                a[i]=b[i];
                i+=1;
            }
            a[i]='\0';
        }

        str join(str two){
           str result(n+two.n,"Concatenate"); //temporary string passed as argument
           int i,j;
           for(i=0;i<n;i++){
               result.a[i]=a[i];
           } 
           for(i=n,j=0;i<n+two.n,j<two.n;i++,j++){
               result.a[i]=two.a[j];
           }
           result.a[i]='\0';
           
           return result;
        }
        void display(){
            std::cout<<a;
        }
        ~str(){
            delete[] a;
        }
};

int main(){
    str a1(13,"Engineers are"),a2(19," Creatures of Logic");
    str result=a1.join(a2);
    result.display();
    return 0;
}