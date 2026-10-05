#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80149380();
void fn_801493BC();
void fn_80149820();
void fn_80149934();
extern char lbl_8049EEE0[];
extern char lbl_8049EEF8[];
extern void *lbl_8056428C;
extern void *lbl_80564290;
extern void *lbl_80564294;
extern void *lbl_80564298;
void fn_80149510();
void *fn_80149578();
void *fn_80149598();
void *fn_801495A0();
void fn_801495DC();
void fn_80149604();
void *fn_80149668();
void *fn_80149688();
}
extern "C" {
void fn_801494E8(){
 fn_80066188((int)fn_80149510);
}
void fn_80149510(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056428C,(int)fn_80149604,(int)fn_80149598,(int)fn_80149578,(int)lbl_8049EEE0,20,(int)fn_801493BC,0,0,0);
}
void *fn_80149578(){return fn_80149380();}
void *fn_80149598(){return lbl_80564290;}
void *fn_801495A0(){
 if(!lbl_80564290 || !(reinterpret_cast<unsigned int *>(lbl_80564290)[0x24/4]&4)) fn_801495DC();
 return lbl_80564290;
}
void fn_801495DC(){
 fn_80066188((int)fn_80149604);
}
void fn_80149604(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564290,(int)fn_80149934,(int)fn_80149688,(int)fn_80149668,(int)lbl_8049EEF8,20,0,0,0,0);
}
void *fn_80149668(){return fn_801495A0();}
void *fn_80149688(){return lbl_80564298;}
void *fn_80149690(void *object){
 fn_80149820();
 return fn_8006546C(lbl_80564294,object);
}
void *fn_801496C8(){
 if(!lbl_80564294 || !(reinterpret_cast<unsigned int *>(lbl_80564294)[0x24/4]&4)) fn_80149820();
 return lbl_80564294;
}
}
#pragma pop
