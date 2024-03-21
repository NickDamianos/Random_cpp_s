#include <iostream>
#include <time.h>
#include <cstdlib>

struct pos{
    int x;
    int y;
};

struct ant{
    pos position;
    bool exei_sporo;
};

struct pin {
    int pinak[9][9];
};

struct sporoi{
    pos position;
    bool parmenw;
};

struct pinakas{
    ant myrg;
    pin ff;
    sporoi n[9];
};

bool is_not_end(pinakas x){

    /*for (int i = 0 ; i < 9 ; i++){
        if  (x.ff.pinak[0][i] == 1){
            return true;
        }   
    }
    return false;*/
    int cnt = 0 ;
    for(int i = 0 ; i < 9 ; i++){
        if (x.ff.pinak[8][i] = 1){
            cnt++;
        }
    }
    if (cnt == 9){
        return false;
    }
    return true;
}


    
    

void sporos ( pinakas& x) {
    
    if (x.myrg.position.y == 0 && x.myrg.exei_sporo == false){
        pos v = x.myrg.position;
        if (x.ff.pinak[v.y][v.x] == 1){
            x.ff.pinak[v.y][v.x] = 0 ;
            x.myrg.exei_sporo = true;
        }
        
    }
    
    
    
    
    
    
    //if (x.myrg.position.y == 0 && x.myrg.position.x >= 0 && x.myrg.position.x < 9 && x.myrg.exei_sporo == false){
      // if(x.ff.pinak[0][x.myrg.position.x] == 1){
       ///     x.myrg.exei_sporo= true;
        //    x.ff.pinak[0][x.myrg.position.x] = 0 ; 
        //    x.n[x.myrg.position.x].parmenw = true;
            
       // } 
    //}
        
        
        /*for (int i = 0; i < 9 ; i++){
            if (x.n[i].position.x == x.myrg.position.x && x.myrg.exei_sporo == false ){
                x.myrg.exei_sporo = true;
                x.n[i].parmenw = true;
                x.ff.pinak[x.myrg.position.y][x.myrg.position.x] = 0;
            }*/
    
    
    
    
    if (x.myrg.position.y == 8 && x.ff.pinak[8][x.myrg.position.x] != 1 && x.myrg.exei_sporo){
        //for (int i = 0; i < 9 ; i++){
           // temp.x = i;
            //temp.y = 8;
            
                
                x.ff.pinak[8][x.myrg.position.x] = 1;
                //x.n[i].position = temp;
                x.myrg.exei_sporo = false;
            
        }
    }


void move(pinakas & x , int n){
    if ( n == 0 && x.myrg.position.y != 0){
        x.ff.pinak[x.myrg.position.y][x.myrg.position.x] = 0 ;
        x.myrg.position.y--;
        x.ff.pinak[x.myrg.position.y][x.myrg.position.x] = 2 ;
    } else if ( n == 1 && x.myrg.position.y != 8){
        x.ff.pinak[x.myrg.position.y][x.myrg.position.x] = 0 ;
        x.myrg.position.y++;
        x.ff.pinak[x.myrg.position.y][x.myrg.position.x] = 2 ;
    } else if ( n == 2 && x.myrg.position.x != 0){
        x.ff.pinak[x.myrg.position.y][x.myrg.position.x] = 0 ;
        x.myrg.position.x--;
        x.ff.pinak[x.myrg.position.y][x.myrg.position.x] = 2 ;
    } else if (n == 3 && x.myrg.position.x != 8){
        x.ff.pinak[x.myrg.position.y][x.myrg.position.x] = 0 ;
        x.myrg.position.x++;
        x.ff.pinak[x.myrg.position.y][x.myrg.position.x] = 2 ;
    }
    
    sporos(x);
  }

//void per_pou_exei(pinakas & x){
    ///
void emf(pinakas x){
    for(int i = 8 ; i >= 0 ; i--){
        for (int j = 0 ; j < 9 ; j++){
            std::cout << x.ff.pinak[i][j] << " ";        
        }
        std::cout<<std::endl;
        
    }
    
    
    
}
int main()
{
    pinakas mirmigi;
    //pos nn;
    
    mirmigi.myrg.exei_sporo = false;
    mirmigi.myrg.position.x = 4;
    mirmigi.myrg.position.y = 4;
    
    for (int i = 0 ; i < 8 ; i++){
        for (int j = 0; j < 9 ; j++){
            mirmigi.ff.pinak[i][j] = 0;
            
        }
    }
    for (int i = 0 ; i < 9 ; i++){
        mirmigi.ff.pinak[8][i] = 0 ;
        
    }
    for (int i= 0 ; i < 9 ; i++){
        mirmigi.ff.pinak[0][i] = 1;
    }
    
    mirmigi.ff.pinak[4][4] = 2;
    
    mirmigi.ff.pinak[8][2] = 0;
    mirmigi.ff.pinak[8][8] = 0;
    srand(time(NULL)); //genitria tuxevn ari8mon 
    //int f = rand() % 4;
    //std::cout << f;
    int cnt = 0; 
    
    do {
        move(mirmigi , rand() % 4);
    
    
        cnt++;
        //emf(mirmigi);
    } while(is_not_end(mirmigi));
    
    std::cout << cnt << std::endl;
    emf(mirmigi);
    return 0;
}
//srand(time(NULL)) genitria tuxevn ari8mon 
//rand() % 4
//