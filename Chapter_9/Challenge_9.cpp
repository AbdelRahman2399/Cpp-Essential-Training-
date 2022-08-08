#include <cstdio>
#include <string>
#include <iostream>
#include <cstdint>
#include <cstring>
#include <cstdlib>
#include <ctime>

std::string card_rank[13] = {"A","2","3","4","5","6","7","8","9","T","J","Q","K"};
std::string card_suit[4] = { "S", "H", "D", "C"};
std::string cards[52];
int nums[52] = {-1};
int x;
int f;
int count = 0;


int check(int x, int j);
void reset_nums();


class Deck{
    std::string card_deck[52];
    //std::string * p = card_deck;
    public:
        Deck();
        Deck(int n);
       // ~Deck();
       void Print_Deck();
       void Print_Test();
       void Shuffle_Deck();
       std::string Deal();
};

class Decks{
    int y;
    std::string card_decks[52][5];
    public:
        Decks(const int& n);
       // ~Deck();
       void Print_Decks();
       void Print_Tests();
       void Shuffle_Decks();
};

Deck::Deck(){
    for(int i=1; i<5; i++){
        for(int j=1; j<14; j++){
            card_deck[count] = card_rank[j-1] + card_suit[i-1];
            count++;
        }
    }
    count = 0;
}

Decks::Decks(const int& n){
    y = n;
for(int k=0; k<n; k++ ){
    for(int i=1; i<5; i++){
        for(int j=1; j<14; j++){
            card_decks[count][k] = card_rank[j-1] + card_suit[i-1];
            count++;
        }
    } 
    count = 0;   
}

}

void Deck::Print_Deck(){
    for(int l = 0; l<52; l++){
        std::cout<< card_deck[l].c_str() <<std::endl;
    }
}

void Decks::Print_Decks(){
    for(int i=0; i<y; i++){
        for(int l = 0; l<52; l++){
        std::cout<< card_decks[l][i].c_str() <<std::endl;
        }
    }
}

void Deck::Print_Test(){
    
    std::cout<< card_deck[51].c_str() <<std::endl;

}

void Decks::Print_Tests(){
     std::cout<< card_decks[34][0].c_str() <<std::endl;
}

void Deck::Shuffle_Deck(){

    
    for(int i=0; i<52; i++){
        cards[i]=card_deck[i]; 
    }

    srand((unsigned)time(nullptr));
    rand();
    for(int i=0; i<52; i++){
        f = 1;
        while(f==1){
            x = rand() % 52;
            f = check(x, i);
        }
        card_deck[i] = cards[x];
        nums[i] = x;
    }

reset_nums();

}

int check(int x, int j){
    for(int i=0; i<j; i++){
        if(nums[i]==x){
            return 1;
        }
    }
    return 0;
}

void reset_nums(){
    for(int i=0; i<52; i++){
        nums[i] = -1;
    }
}

std::string Deck::Deal(){
    static int m = 52;
    m--;
    if(m<0){
        m=52;
        m--;
    }
    return card_deck[m];    
}


int main(){
    Deck d1;
    d1.Print_Deck();
    d1.Shuffle_Deck();
    d1.Print_Deck();
    std::string c = d1.Deal();
    std::cout << c.c_str() << std::endl;
    c = d1.Deal();
    std::cout << c.c_str() << std::endl;
    //Decks d2(2);
    //d2.Print_Decks();
    return 0;
}




