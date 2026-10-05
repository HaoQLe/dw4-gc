#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800AF084();
extern char lbl_804784C4[];
extern char lbl_8047AEE4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_80562538;
void *fn_800AEF38();
void *fn_800AEF74();
void fn_800AEFCC();
void fn_800AEFF4();
void *fn_800AF064();
}
struct UnknownGenObject800AEF74 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AEEC4(void *object){
 fn_800AEFCC();
 return fn_8006546C(lbl_80562538,object);
}
void *fn_800AEEFC(){
 if(!lbl_80562538) lbl_80562538=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562538;
}
void *fn_800AEF38(){
 if(!lbl_80562538 || !(reinterpret_cast<unsigned int *>(lbl_80562538)[0x24/4]&4)) fn_800AEFCC();
 return lbl_80562538;
}
void *fn_800AEF74(){
 UnknownGenObject800AEF74 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AEE4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AEFCC(){
 fn_80066188((int)fn_800AEFF4);
}
void fn_800AEFF4(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562538,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AF064,(int)lbl_804784C4,24,(int)fn_800AEF74,(int)fn_800AF084,0,0);
}
void *fn_800AF064(){return fn_800AEF38();}
}
#pragma pop
