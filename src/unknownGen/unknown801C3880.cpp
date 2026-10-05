#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801C3B18();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B0434[];
extern char lbl_804B7120[];
extern char lbl_804B7184[];
extern char lbl_80560708[8];
extern void *lbl_805621F4;
extern void *lbl_805650AC;
extern void *lbl_805650B0;
void *fn_801C38BC();
void *fn_801C38F8();
void fn_801C3968();
void fn_801C3990();
void *fn_801C39FC();
}
struct UnknownGenObject801C38F8 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801C3880(){
 if(!lbl_805650AC) lbl_805650AC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805650AC;
}
void *fn_801C38BC(){
 if(!lbl_805650AC || !(reinterpret_cast<unsigned int *>(lbl_805650AC)[0x24/4]&4)) fn_801C3968();
 return lbl_805650AC;
}
void *fn_801C38F8(){
 UnknownGenObject801C38F8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7184;
 object.unknown00=lbl_804B7120;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C3968(){
 fn_80066188((int)fn_801C3990);
}
void fn_801C3990(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805650AC,(int)fn_8002907C,(int)fn_80024180,(int)fn_801C39FC,(int)lbl_804B0434,20,(int)fn_801C38F8,0,0,(int)lbl_80560708);
}
void *fn_801C39FC(){return fn_801C38BC();}
void *fn_801C3A1C(void *object){
 fn_801C3B18();
 return fn_8006546C(lbl_805650B0,object);
}
void *fn_801C3A54(){
 if(!lbl_805650B0 || !(reinterpret_cast<unsigned int *>(lbl_805650B0)[0x24/4]&4)) fn_801C3B18();
 return lbl_805650B0;
}
}
#pragma pop
