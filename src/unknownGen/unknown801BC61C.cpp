#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801BC980();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AEE50[];
extern char lbl_804B78A4[];
extern char lbl_804B7908[];
extern char lbl_80560534[8];
extern void *lbl_805621F4;
extern void *lbl_80564DE0;
extern void *lbl_80564DE4;
void *fn_801BC658();
void *fn_801BC694();
void fn_801BC704();
void fn_801BC72C();
void *fn_801BC798();
}
struct UnknownGenObject801BC694 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801BC61C(){
 if(!lbl_80564DE0) lbl_80564DE0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564DE0;
}
void *fn_801BC658(){
 if(!lbl_80564DE0 || !(reinterpret_cast<unsigned int *>(lbl_80564DE0)[0x24/4]&4)) fn_801BC704();
 return lbl_80564DE0;
}
void *fn_801BC694(){
 UnknownGenObject801BC694 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7908;
 object.unknown00=lbl_804B78A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BC704(){
 fn_80066188((int)fn_801BC72C);
}
void fn_801BC72C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DE0,(int)fn_8002907C,(int)fn_80024180,(int)fn_801BC798,(int)lbl_804AEE50,20,(int)fn_801BC694,0,0,(int)lbl_80560534);
}
void *fn_801BC798(){return fn_801BC658();}
void *fn_801BC7B8(){
 if(!lbl_80564DE4) lbl_80564DE4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564DE4;
}
void *fn_801BC7F4(){
 if(!lbl_80564DE4 || !(reinterpret_cast<unsigned int *>(lbl_80564DE4)[0x24/4]&4)) fn_801BC980();
 return lbl_80564DE4;
}
}
#pragma pop
