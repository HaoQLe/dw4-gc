#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_80269380();
void *fn_80270424();
void *fn_80270A38();
void fn_80272D8C(void *,int);
void fn_80273450(void *,void *);
void fn_802734C8(void *,void *,void *);
void fn_802737A0(void *);
void fn_802739F0(void *,int);
extern char lbl_804C92D4[];
extern char lbl_804C92E0[];
extern void *lbl_805621F4;
extern void *lbl_80565FF8;
void *fn_80269648();
void *fn_80269684();
void fn_802696C4();
void fn_802696EC();
void *fn_80269754();
}
struct UnknownGenObject80269684_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *fn_8026960C(){
 if(!lbl_80565FF8) lbl_80565FF8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565FF8;
}
void *fn_80269648(){
 if(!lbl_80565FF8 || !(reinterpret_cast<unsigned int *>(lbl_80565FF8)[0x24/4]&4)) fn_802696C4();
 return lbl_80565FF8;
}
void *fn_80269684(){
 UnknownGenObject80269684_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804C92E0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802696C4(){
 fn_80066188((int)fn_802696EC);
}
void fn_802696EC(){
 fn_80269380();
 fn_80066204(0,(int)&lbl_80565FF8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80269754,(int)lbl_804C92D4,8,(int)fn_80269684,0,0,0);
}
void *fn_80269754(){return fn_80269648();}
void *fn_80269774(){return lbl_80565FF8;}
void *fn_8026977C(){return fn_80270424();}
void *fn_8026979C(){return fn_80270A38();}
void fn_802697BC(int p0,int p1,int p2,int p3){
 fn_802737A0((void *)p0);
 fn_80273450((void *)p0,(void *)p1);
 fn_802734C8((void *)p0,(void *)p2,(void *)p3);
 fn_802739F0((void *)p0,-3);
 fn_80272D8C((void *)p0,-2);
}
}
#pragma pop
