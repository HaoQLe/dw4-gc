#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80216620();
void igNamedObject_register();
void igObjectList_register();
void igUnresolvedSymbol_fieldInit();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804BA408[];
extern char lbl_804BA420[];
extern char lbl_804BA42C[];
extern char lbl_804BC7C8[];
extern char lbl_804BC880[];
extern char lbl_804BC8E4[];
extern char lbl_80560BA0[8];
extern void *lbl_80565A04;
extern void *lbl_80565A08;
void *igUnresolvedSymbolList_getMeta();
void *igUnresolvedSymbolList_vtableRead();
void fn_80216F54();
void igUnresolvedSymbolList_register();
void *igUnresolvedSymbolList_getMetaCall();
void *igUnresolvedSymbol_getMeta();
void *igUnresolvedSymbol_vtableRead();
void fn_80217194();
void igUnresolvedSymbol_register();
void *igUnresolvedSymbol_getMetaCall();
}
struct UnknownGenObject80216EE4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8021707C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8021707C(){fn_8006665C(this);}
};
struct UnknownGenObject8021707C_0 : UnknownGenRoot8021707C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8021707C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8021707C : UnknownGenObject8021707C_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[4];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8021707C(){unknown00=lbl_804BC7C8;}
};
extern "C" {
void *fn_80216E70(void *object){
 fn_80216F54();
 return fn_8006546C(lbl_80565A04,object);
}
void *igUnresolvedSymbolList_getMeta(){
 if(!lbl_80565A04 || !(reinterpret_cast<unsigned int *>(lbl_80565A04)[0x24/4]&4)) fn_80216F54();
 return lbl_80565A04;
}
void *igUnresolvedSymbolList_vtableRead(){
 UnknownGenObject80216EE4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804BC8E4;
 object.unknown00=lbl_804BC880;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80216F54(){
 fn_80066188((int)igUnresolvedSymbolList_register);
}
void igUnresolvedSymbolList_register(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A04,(int)igObjectList_register,(int)fn_80024180,(int)igUnresolvedSymbolList_getMetaCall,(int)lbl_804BA408,20,(int)igUnresolvedSymbolList_vtableRead,0,0,(int)lbl_80560BA0);
}
void *igUnresolvedSymbolList_getMetaCall(){return igUnresolvedSymbolList_getMeta();}
void *fn_80217008(void *object){
 fn_80217194();
 return fn_8006546C(lbl_80565A08,object);
}
void *igUnresolvedSymbol_getMeta(){
 if(!lbl_80565A08 || !(reinterpret_cast<unsigned int *>(lbl_80565A08)[0x24/4]&4)) fn_80217194();
 return lbl_80565A08;
}
void *igUnresolvedSymbol_vtableRead(){
 UnknownGenObject8021707C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804BC7C8;
 object.unknown0C.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80217194(){
 fn_80066188((int)igUnresolvedSymbol_register);
}
void igUnresolvedSymbol_register(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A08,(int)igNamedObject_register,(int)fn_80023CF4,(int)igUnresolvedSymbol_getMetaCall,(int)lbl_804BA42C,24,(int)igUnresolvedSymbol_vtableRead,(int)igUnresolvedSymbol_fieldInit,0,(int)lbl_804BA420);
}
void *igUnresolvedSymbol_getMetaCall(){return igUnresolvedSymbol_getMeta();}
}
#pragma pop
