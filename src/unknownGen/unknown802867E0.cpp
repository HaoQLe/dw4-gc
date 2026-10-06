#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80284294();
void *fn_80284540();
void fn_80284B74();
void fn_8028697C();
extern char lbl_80416C3C[];
extern char lbl_804CB4B8[];
extern char lbl_804CBB90[];
extern void *lbl_80515D24;
void *fn_80286820();
void *fn_8028686C();
void fn_802868C0();
void fn_802868E8();
void *fn_8028695C();
}
struct UnknownGenObject8028686C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_802867E0(void *object){
 fn_802868C0();
 return fn_8006546C(lbl_80515D24,object);
}
void *fn_80286820(){
 if(!lbl_80515D24 || !(reinterpret_cast<unsigned int *>(lbl_80515D24)[0x24/4]&4)) fn_802868C0();
 return lbl_80515D24;
}
void *fn_8028686C(){
 UnknownGenObject8028686C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804CBB90;
 object.unknown00=lbl_804CB4B8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802868C0(){
 fn_80066188((int)fn_802868E8);
}
void fn_802868E8(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515D24,(int)fn_80284B74,(int)fn_80284540,(int)fn_8028695C,(int)lbl_80416C3C,24,(int)fn_8028686C,(int)fn_8028697C,0,0);
}
void *fn_8028695C(){return fn_80286820();}
}
#pragma pop
