#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_8002DD40();
void fn_80053CF4(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
extern void *lbl_805619CC;
extern void *lbl_805621F4;
void fn_8002DD18();
}
struct UnknownGenObject8002DCE4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8002DC6C(){
 if(!lbl_805619CC) lbl_805619CC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805619CC;
}
void *fn_8002DCA8(){
 if(!lbl_805619CC || !(reinterpret_cast<unsigned int *>(lbl_805619CC)[0x24/4]&4)) fn_8002DD18();
 return lbl_805619CC;
}
void *fn_8002DCE4(){
 UnknownGenObject8002DCE4_0 object;
 fn_80053CF4(&object);
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002DD18(){
 fn_80066188((int)fn_8002DD40);
}
}
#pragma pop
