#include<iostream>
float feet_to_inch(){
    float feet,inch;
    std::cout<<"Enter feet:";
    std::cin>>feet;
    inch=feet*12.0f;
    return inch;
}
float feet_to_inch(float feet){
    float inch;
    inch=feet*12.0f;
    return inch;
}
float feet_to_inch(float feet,float inch){
    return inch;
}

int  main(){
    std::cout<<"Function 1:\n";
    std::cout<<feet_to_inch()<<std::endl;
    std::cout<<"Function 2:\n";
    std::cout<<feet_to_inch(5)<<std::endl;
    std::cout<<"Function 3:\n";
    std::cout<<feet_to_inch(5,5*12.0f);
    return 0;
}