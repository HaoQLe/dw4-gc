#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_8003826C();
void *fn_80038318();
void fn_8003BE78();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80468A00[];
extern char lbl_804705F8[];
extern char lbl_80472FA0[];
extern char lbl_80473164[];
extern char lbl_80474840[];
extern char lbl_804748A0[];
extern char lbl_80474900[];
extern void *lbl_80561E30;
extern void *lbl_805620F4;
void *fn_8003BD5C();
void fn_8003BDD8();
void fn_8003BE00();
void *fn_8003BE70();
}
struct UnknownGenObject8003BD5C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8003BD20(){
 if(!lbl_805620F4 || !(reinterpret_cast<unsigned int *>(lbl_805620F4)[0x24/4]&4)) fn_8003BDD8();
 return lbl_805620F4;
}
void *fn_8003BD5C(){
 UnknownGenObject8003BD5C object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80474900;
 object.unknown00=lbl_804748A0;
 object.unknown00=lbl_80474840;
 object.unknown00=lbl_80473164;
 object.unknown00=lbl_804705F8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003BDD8(){
 fn_80066188((int)fn_8003BE00);
}
void fn_8003BE00(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805620F4,(int)fn_8003826C,(int)fn_8003BE70,(int)fn_80038318,(int)lbl_80468A00,20,(int)fn_8003BD5C,(int)fn_8003BE78,0,0);
}
void *fn_8003BE70(){return lbl_80561E30;}
}
#pragma pop
