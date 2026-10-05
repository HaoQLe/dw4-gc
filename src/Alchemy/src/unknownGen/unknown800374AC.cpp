#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80023FDC();
void fn_80029694();
void fn_8003782C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
extern char lbl_804676E4[];
extern char lbl_804676F4[];
extern char lbl_80467704[];
extern char lbl_80467710[];
extern char lbl_80472FA0[];
extern char lbl_8047410C[];
extern char lbl_80474170[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_8055D658[8];
extern void *lbl_80561DF8;
extern void *lbl_80561DFC;
extern void *lbl_80561E00;
void *fn_800374AC();
void fn_800374E8();
void fn_80037510();
void *fn_80037574();
void *fn_80037594();
void *fn_800375D4();
void *fn_80037610();
void fn_80037680();
void fn_800376A8();
void *fn_80037714();
void *fn_80037734();
void fn_80037770();
void fn_80037798();
void *fn_8003780C();
}
struct UnknownGenObject80037610 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800374AC(){
 if(!lbl_80561DF8 || !(reinterpret_cast<unsigned int *>(lbl_80561DF8)[0x24/4]&4)) fn_800374E8();
 return lbl_80561DF8;
}
void fn_800374E8(){
 fn_80066188((int)fn_80037510);
}
void fn_80037510(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_80561DF8,(int)fn_80037798,(int)fn_80037594,(int)fn_80037574,(int)lbl_804676E4,20,0,0,0,0);
}
void *fn_80037574(){return fn_800374AC();}
void *fn_80037594(){return lbl_80561E00;}
void *fn_8003759C(void *object){
 fn_80037680();
 return fn_8006546C(lbl_80561DFC,object);
}
void *fn_800375D4(){
 if(!lbl_80561DFC || !(reinterpret_cast<unsigned int *>(lbl_80561DFC)[0x24/4]&4)) fn_80037680();
 return lbl_80561DFC;
}
void *fn_80037610(){
 UnknownGenObject80037610 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_80474170;
 object.unknown00=lbl_8047410C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80037680(){
 fn_80066188((int)fn_800376A8);
}
void fn_800376A8(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561DFC,(int)fn_80029694,(int)fn_80023FDC,(int)fn_80037714,(int)lbl_804676F4,20,(int)fn_80037610,0,0,(int)lbl_8055D658);
}
void *fn_80037714(){return fn_800375D4();}
void *fn_80037734(){
 if(!lbl_80561E00 || !(reinterpret_cast<unsigned int *>(lbl_80561E00)[0x24/4]&4)) fn_80037770();
 return lbl_80561E00;
}
void fn_80037770(){
 fn_80066188((int)fn_80037798);
}
void fn_80037798(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_80561E00,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8003780C,(int)lbl_80467710,20,0,(int)fn_8003782C,0,(int)lbl_80467704);
}
void *fn_8003780C(){return fn_80037734();}
}
#pragma pop
