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
float feet_to_inch(float feet,float& inch){
    inch=12.0f*feet;
    return 0;
}

int  main(){
    std::cout<<"Function 1:\n";
    std::cout<<feet_to_inch()<<std::endl;
    std::cout<<"Function 2:\n";
    std::cout<<feet_to_inch(5)<<std::endl;
    std::cout<<"Function 3:\n";
    float inch=0;
    feet_to_inch(5,inch);
    std::cout<<inch;
    return 0;
}