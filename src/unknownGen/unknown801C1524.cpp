#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801AB354();
void *fn_801ABB34();
void fn_801C1708();
void *fn_801CE580();
extern char lbl_804AFA10[];
extern char lbl_804B4C5C[];
extern char lbl_804BA150[];
extern char lbl_80560674[8];
extern void *lbl_80564F78;
void *fn_801C157C();
void *fn_801C15B8();
void fn_801C164C();
void fn_801C1674();
void *fn_801C16E8();
}
struct UnknownGenRoot801C15B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C15B8(){fn_8006665C(this);}
};
struct UnknownGenObject801C15B8 : UnknownGenRoot801C15B8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801C15B8(){unknown00=lbl_804B4C5C;}
};
extern "C" {
void *fn_801C1524(){return fn_801CE580();}
void *fn_801C1544(void *object){
 fn_801C164C();
 return fn_8006546C(lbl_80564F78,object);
}
void *fn_801C157C(){
 if(!lbl_80564F78 || !(reinterpret_cast<unsigned int *>(lbl_80564F78)[0x24/4]&4)) fn_801C164C();
 return lbl_80564F78;
}
void *fn_801C15B8(){
 UnknownGenObject801C15B8 object;
 object.unknown00=lbl_804BA150;
 object.unknown00=lbl_804B4C5C;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C164C(){
 fn_80066188((int)fn_801C1674);
}
void fn_801C1674(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564F78,(int)fn_801AB354,(int)fn_801ABB34,(int)fn_801C16E8,(int)lbl_804AFA10,16,(int)fn_801C15B8,(int)fn_801C1708,0,(int)lbl_80560674);
}
void *fn_801C16E8(){return fn_801C157C();}
}
#pragma pop
