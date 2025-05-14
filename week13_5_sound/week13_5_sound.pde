//week13_5_sound
//要先安裝Sketch-Library-Manage Libraries...
//找sound下載sound的函式點install
import processing.sound.*;//使用聲音的外掛
SoundFile mySound,monkey,sword;//宣告變數mySound 他是Soundfile
void setup(){
  size(400,400);//視窗大小400x400 小心檔名的空白
  monkey=new SoundFile(this,"Monkey 1.mp3");
  sword=new SoundFile(this,"sword slash.mp3");
  mySound = new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();//再撥放剛剛讀入的聲音檔
}
void mousePressed(){
  if(mouseButton==LEFT)monkey.play();
  if(mouseButton==RIGHT)sword.play();
  
}
void draw(){
} 
