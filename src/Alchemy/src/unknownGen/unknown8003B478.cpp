#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80029E64(void *);
void fn_8002CD80();
void *fn_8002CE88();
void fn_8003B744();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80468814[];
extern char lbl_804703A4[];
extern char lbl_80473354[];
extern char lbl_804733EC[];
extern void *lbl_80561978;
extern void *lbl_805620B4;
extern void *lbl_805620B8;
extern void *lbl_805621F4;
void *fn_8003B4B4();
void fn_8003B50C();
void fn_8003B534();
void *fn_8003B59C();
}
struct UnknownGenObject8003B4B4_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_8003B478(){
 if(!lbl_805620B4 || !(reinterpret_cast<unsigned int *>(lbl_805620B4)[0x24/4]&4)) fn_8003B50C();
 return lbl_805620B4;
}
void *fn_8003B4B4(){
 UnknownGenObject8003B4B4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804733EC;
 object.unknown00=lbl_80473354;
 object.unknown00=lbl_804703A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003B50C(){
 fn_80066188((int)fn_8003B534);
}
void fn_8003B534(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805620B4,(int)fn_8002CD80,(int)fn_8003B59C,(int)fn_8002CE88,(int)lbl_80468814,40,(int)fn_8003B4B4,0,0,0);
}
void *fn_8003B59C(){return lbl_80561978;}
void *fn_8003B5A4(){
 if(!lbl_805620B8) lbl_805620B8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805620B8;
}
void *fn_8003B5E0(){
 if(!lbl_805620B8 || !(reinterpret_cast<unsigned int *>(lbl_805620B8)[0x24/4]&4)) fn_8003B744();
 return lbl_805620B8;
}
}
#pragma pop
