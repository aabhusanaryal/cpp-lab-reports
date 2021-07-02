#include <iostream>

class Character
{
private:
	char* name;
public:
	Character(int s,char* n)
	{
		name = new char[s];
		int i =0;
		for(i; n[i] !='\0'; i++)
			name[i] = n[i];
		name[i] = '\0';
	}

	void countlength()
	{
		int i = 0;
		for (i; name[i] !='\0';i++);
		std::cout<<"Length of \""<<name<<"\" is:"<<i <<std::endl;
	}

	void join(Character c)
	{
		char joined[100];
		int i=0,j=0;
		for (i; name[i] !='\0';i++)
			joined[i] = name[i];
		for (i;c.name[j] !='\0';i++)
		{
			joined[i] = c.name[j];
			j++;
		}
		joined[i] = '\0';
		std::cout<<joined<<std::endl;
	}
	~Character()
	{
		delete[] name;
	}
}; 

int main()
{
	Character c1(13, "Engineers are");
	c1.countlength();
	Character c2(19, " Creatures of Logic");
	c1.join(c2);
}
