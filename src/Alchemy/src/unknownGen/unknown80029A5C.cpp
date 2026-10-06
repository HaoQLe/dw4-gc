#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024180();
void fn_8002907C();
void fn_80029D30();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80464278[];
extern char lbl_80472FA0[];
extern char lbl_80476234[];
extern char lbl_80476298[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D254[8];
extern void *lbl_80561740;
extern void *lbl_80561744;
extern void *lbl_805621F4;
void *fn_80029A98();
void *fn_80029AD4();
void fn_80029B44();
void fn_80029B6C();
void *fn_80029BD8();
}
struct UnknownGenObject80029AD4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80029A5C(){
 if(!lbl_80561740) lbl_80561740=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561740;
}
void *fn_80029A98(){
 if(!lbl_80561740 || !(reinterpret_cast<unsigned int *>(lbl_80561740)[0x24/4]&4)) fn_80029B44();
 return lbl_80561740;
}
void *fn_80029AD4(){
 UnknownGenObject80029AD4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80476298;
 object.unknown00=lbl_80476234;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80029B44(){
 fn_80066188((int)fn_80029B6C);
}
void fn_80029B6C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561740,(int)fn_8002907C,(int)fn_80024180,(int)fn_80029BD8,(int)lbl_80464278,20,(int)fn_80029AD4,0,0,(int)lbl_8055D254);
}
void *fn_80029BD8(){return fn_80029A98();}
void *fn_80029BF8(void *object){
 fn_80029D30();
 return fn_8006546C(lbl_80561744,object);
}
void *fn_80029C30(){
 if(!lbl_80561744) lbl_80561744=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561744;
}
void *fn_80029C6C(){
 if(!lbl_80561744 || !(reinterpret_cast<unsigned int *>(lbl_80561744)[0x24/4]&4)) fn_80029D30();
 return lbl_80561744;
}
}
#pragma pop
