#include <iostream>

struct Cell {
    int x, y; 
};

class Tetromino {
public:
    virtual void move_right(int cols_in_grid) = 0;
    virtual void move_left() = 0;
    virtual void move_down() = 0;
    virtual void rotate(int cols_in_grid) = 0;
    virtual Cell get_current_pivot_position() const = 0;
    virtual int get_current_orientation() const = 0;
    virtual ~Tetromino() { }
};

class T: public Tetromino {
    Cell pivot;
    int orientation;
public:
    T(const Cell &pivot) {
        this->pivot = pivot;
        this->orientation = 1;
    }
    ~T() {}
    virtual void move_right(int cols_in_grid) {
        /* write your code here */
        if(this->pivot.x<cols_in_grid-2)
        {
            (this->pivot.x)++;
        }
    }
    virtual void move_left() {
        /* write your code here */
        if((this->pivot.x)>1)
        {
            (pivot.x)--;
        }
    }
    virtual void move_down(){
        /* write your code here */
        if((this->pivot.y)>1)
        {
            (this->pivot.y)--;
        }
    }
    virtual void rotate(int cols_in_grid) {
        /* write your code here */
       this->orientation++;
        if(this->orientation>4)
        {
            (this->orientation)%=4;
        }
    }
    virtual Cell get_current_pivot_position() const {
        return pivot;
    }
    virtual int get_current_orientation() const{
        return orientation;
    }
};

class L: public Tetromino {
    Cell pivot;
    int orientation;
public:
    L(const Cell &pivot) {
        this->pivot = pivot;
        this->orientation = 1;
    }
    ~L() {}
    virtual void move_right(int cols_in_grid) {
        /* write your code here */
        if(this->orientation==3)
        {
            if(this->pivot.x<cols_in_grid-1)
            {
                (this->pivot.x)++;
            }
        }
        else{
        if(this->pivot.x<cols_in_grid-2)
            {
               (this->pivot.x)++;
            }
        }
    }
    virtual void move_left(){
        /* write your code here */
        if(this->orientation==1)
        {
            if(this->pivot.x>0)
            {
                (this->pivot.x)--;
            }
        }
        else
        {
            if(this->pivot.x>1)
            {
                (this->pivot.x)--;
            }
        }
    }
    virtual void move_down(){
        /* write your code here */
        if(this->orientation==4)
        {
            if(this->pivot.y>0)
            {
                (this->pivot.y)--;
            }
        }
        else
        {
            if(this->pivot.y>1)
            {
                (this->pivot.y)--;
            }
        }
    }
    virtual void rotate(int cols_in_grid) {
        /* write your code here */
        if(this->orientation==1)
        {
            if((this->pivot.x)>0)
            {
                this->orientation++;
            }
        }
        else if(this->orientation==4)
        {
             if((this->pivot.y)>0)   
             {
                 this->orientation++;
             }
        }
        else if(this->orientation==2)
        {
            this->orientation++;
        }
        else if(this->orientation==3)
        {
            if((this->pivot.x)<cols_in_grid-1)
            {
                this->orientation++;
            }
        }
        if(this->orientation>4)
        {
            (this->orientation)%=4;
        }
    }
    virtual Cell get_current_pivot_position() const {
        return pivot;
    }
    virtual int get_current_orientation() const{
        return orientation;
    }
};

class S: public Tetromino {
    Cell pivot;
    int orientation;
public:
    S(const Cell &pivot) {
        this->pivot = pivot;
        this->orientation = 1;
    }
    ~S() {}
    virtual void move_right(int cols_in_grid) {
        /* write your code here */
        if(this->orientation==1 ||this->orientation==4 )
        {
            if(this->pivot.x<cols_in_grid-1)
            {
                (this->pivot.x)++;
            }
        }
        else
        {
            if(this->pivot.x<cols_in_grid-2)
            {
               (this->pivot.x)++;
            }
        }
    }
    virtual void move_left() {
        /* write your code here */
        if(this->orientation==2 || this->orientation==3 )
        {
            if(this->pivot.x>0)
            {
                (this->pivot.x)--;
            }
        }
        else
        {
            if(this->pivot.x>1)
            {
                (this->pivot.x)--;
            }
        }
    }
    virtual void move_down() {
        /* write your code here */
        if(this->orientation==1 || this->orientation==2 )
        {
            if(this->pivot.y>0)
            {
                (this->pivot.y)--;
            }
        }
        else
        {
            if(this->pivot.y>1)
            {
                (this->pivot.y)--;
            }
        }
    }
    virtual void rotate(int cols_in_grid){
        /* write your code here */
        if(this->orientation==2 || this->orientation==3 )
        {
            if((this->pivot.x)>0)
            {
                if(this->orientation==2 && (this->pivot.y>0))
                    this->orientation++;
                else if(this->orientation==3)
                    this->orientation++;
            }
        }
        else if(this->orientation==1 || this->orientation==4)
        {
            if((this->pivot.x)<cols_in_grid-1)
            {
                this->orientation++;
            }
        }
        if(this->orientation>4)
        {
            (this->orientation)%=4;
        }
    }
    virtual Cell get_current_pivot_position() const {
        return pivot;
    }
    virtual int get_current_orientation() const{
        return orientation;
    }
};

class C: public Tetromino {
    Cell pivot;
    int orientation;
public:
    C(const Cell &pivot) {
        this->pivot = pivot;
        this->orientation = 1;
    }
    ~C() {}
    virtual void move_right(int cols_in_grid) {
        /* write your code here */
        if(this->orientation==3)
        {
            if(this->pivot.x<cols_in_grid-1)
            {
                (this->pivot.x)++;
            }
        }
        else{
        if(this->pivot.x<cols_in_grid-2)
            {
               (this->pivot.x)++;
            }
        }
    }
    virtual void move_left(){
        /* write your code here */
        if(this->orientation==1)
        {
            if(this->pivot.x>0)
            {
                (this->pivot.x)--;
            }
        }
        else
        {
            if(this->pivot.x>1)
            {
                (this->pivot.x)--;
            }
        }
    }
    virtual void move_down(){
        /* write your code here */
        if(this->orientation==4)
        {
            if(this->pivot.y>0)
            {
                (this->pivot.y)--;
            }
        }
        else
        {
            if(this->pivot.y>1)
            {
                (this->pivot.y)--;
            }
        }
    }
    virtual void rotate(int cols_in_grid) {
        /* write your code here */
        if(this->orientation==1)
        {
            if((this->pivot.x)>0)
            {
                this->orientation++;
            }
        }
        else if(this->orientation==4)
        {
             if((this->pivot.y)>0)   
             {
                 this->orientation++;
             }
        }
        else if(this->orientation==2)
        {
            this->orientation++;
        }
        else if(this->orientation==3)
        {
            if((this->pivot.x)<cols_in_grid-1)
            {
                this->orientation++;
            }
        }
        if(this->orientation>4)
        {
            (this->orientation)%=4;
        }
    }
    virtual Cell get_current_pivot_position() const {
        return pivot;
    }
    virtual int get_current_orientation() const{
        return orientation;
    }
};

int main() {
    const int COLS_IN_GRID = 10;
    
    int x, y;
    std::cin >> x >> y;
    Cell pivot = {x, y};
    
    Tetromino *tetrominoes[4];
    tetrominoes[0] = new T(pivot);
    tetrominoes[1] = new L(pivot);
    tetrominoes[2] = new S(pivot);
    tetrominoes[3] = new C(pivot);
    
    char c;
    std::cin >> c;
    do {
        switch(c) {
            case 'L':
                for(int i = 0; i < 4; i++)
                    tetrominoes[i]->move_left();
                break;
            case 'R':
                for(int i = 0; i < 4; i++)
                    tetrominoes[i]->move_right(COLS_IN_GRID);
                break;
            case 'D':
                for(int i = 0; i < 4; i++)
                    tetrominoes[i]->move_down();
                break;
            case 'O':
                for(int i = 0; i < 4; i++)
                    tetrominoes[i]->rotate(COLS_IN_GRID);
                break;
        }
        std::cin >> c;
    }while(!std::cin.eof());

    for(int i = 0; i < 4; i++) {
        pivot = tetrominoes[i]->get_current_pivot_position();
        std::cout << pivot.x << " " << pivot.y << std::endl;
        std::cout << tetrominoes[i]->get_current_orientation() << std::endl;
        delete tetrominoes[i];
    }
    return 0;
}