#ifndef ROBOT_H
#define ROBOT_H

class Robot {
    public:
        int xlocation, ylocation;
        bool cargoBed;
        char load;
        Robot();
        void setX(int x);
        void setY(int y);
        inline int getX();
        inline int getY();
        void setCargo(bool b);
        inline bool getCargo();
        void setLoad(char l);
        inline char getLoad();
        bool moveTo(int x, int y);
        void printRobot();
};

#endif