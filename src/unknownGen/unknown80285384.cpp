#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80284294();
void fn_8028557C();
void fn_8028570C();
extern char lbl_80416A54[];
extern char lbl_804CB0C0[];
extern char lbl_804CB728[];
extern char lbl_804CBFA0[];
extern void *lbl_80515CA0;
extern void *lbl_80515CAC;
void *fn_80285384();
void *fn_802853D0();
void fn_802854A8();
void fn_802854D0();
void *fn_8028554C();
void *fn_8028556C();
}
struct UnknownGenRoot802853D0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802853D0(){fn_8006665C(this);}
};
struct UnknownGenObject802853D0 : UnknownGenRoot802853D0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802853D0(){unknown00=lbl_804CBFA0;}
};
extern "C" {
void *fn_80285384(){
 if(!lbl_80515CA0 || !(reinterpret_cast<unsigned int *>(lbl_80515CA0)[0x24/4]&4)) fn_802854A8();
 return lbl_80515CA0;
}
void *fn_802853D0(){
 UnknownGenObject802853D0 object;
 object.unknown00=lbl_804CB728;
 object.unknown00=lbl_804CBFA0;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802854A8(){
 fn_80066188((int)fn_802854D0);
}
void fn_802854D0(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515CA0,(int)fn_8028570C,(int)fn_8028556C,(int)fn_8028554C,(int)lbl_80416A54,16,(int)fn_802853D0,(int)fn_8028557C,0,(int)lbl_804CB0C0);
}
void *fn_8028554C(){return fn_80285384();}
void *fn_8028556C(){return lbl_80515CAC;}
}
#pragma pop
