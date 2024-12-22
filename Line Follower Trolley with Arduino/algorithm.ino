bool onLine = false;
bool left = true;
const int Delay = 180;
const int DelayT = 10;
unsigned int start = 0;

void algorithm(){

  setVelocity(0, 75);
  setVelocity(1, 80);
  onLine = false;
  left = !left;

  while (((millis() - start) < Delay) || stayOnBlackLine() || !onLine ) {
    if(left){
     turnLeft();
    }
    else{
     turnRight();
    }
    if (stayOnBlackLine()){
      onLine = true;
      start = millis();
    }
    delay(DelayT);
  }
}
