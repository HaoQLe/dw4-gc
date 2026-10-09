#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80030000();
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igElfFile_fieldInit();
void igObject_register();
extern char lbl_80468458[];
extern char lbl_80468468[];
extern char lbl_8046FAFC[];
extern char lbl_8046FE98[];
extern char lbl_8055D6D0[8];
extern char lbl_8055D6D8[8];
extern char lbl_8055D6E0[8];
extern char lbl_8055D6E8[8];
extern char lbl_8055D6F0[8];
extern void *lbl_80562014;
extern void *lbl_80562020;
void *igProgramFile_getMeta();
void *igProgramFile_vtableRead();
void fn_8003A61C();
void igProgramFile_register();
void *igProgramFile_getMetaCall();
void igProgramFile_fieldInit();
void *igElfFile_getMeta();
void *igElfFile_vtableRead();
void fn_8003A8D0();
void igElfFile_register();
void *igElfFile_getMetaCall();
void *igElfFile_parentMeta();
}
struct UnknownGenRoot8003A554 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003A554(){fn_8006665C(this);}
};
struct UnknownGenObject8003A554 : UnknownGenRoot8003A554 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8003A554(){unknown00=lbl_8046FAFC;}
};
struct UnknownGenRoot8003A7F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003A7F8(){fn_8006665C(this);}
};
struct UnknownGenObject8003A7F8_0 : UnknownGenRoot8003A7F8 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8003A7F8_0(){unknown00=lbl_8046FAFC;}
};
struct UnknownGenObject8003A7F8 : UnknownGenObject8003A7F8_0 {
 char unknown10[96];
 inline ~UnknownGenObject8003A7F8(){unknown00=lbl_8046FE98;}
};
extern "C" {
void *igProgramFile_getMeta(){
 if(!lbl_80562014 || !(reinterpret_cast<unsigned int *>(lbl_80562014)[0x24/4]&4)) fn_8003A61C();
 return lbl_80562014;
}
void *igProgramFile_vtableRead(){
 UnknownGenObject8003A554 object;
 object.unknown00=lbl_8046FAFC;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003A61C(){
 fn_80066188((int)igProgramFile_register);
}
void igProgramFile_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80562014,(int)igObject_register,(int)fn_800237D0,(int)igProgramFile_getMetaCall,(int)lbl_80468458,16,(int)igProgramFile_vtableRead,(int)igProgramFile_fieldInit,0,(int)lbl_8055D6D0);
}
void *igProgramFile_getMetaCall(){return igProgramFile_getMeta();}
void igProgramFile_fieldInit(){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(lbl_80562014)+25)=0;
 void *value0=lbl_80562014;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D6D8,2);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_80030000();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 fn_800659C0(value0,lbl_8055D6E0,lbl_8055D6E8,lbl_8055D6F0,value1);
}
void *fn_8003A784(void *object){
 fn_8003A8D0();
 return fn_8006546C(lbl_80562020,object);
}
void *igElfFile_getMeta(){
 if(!lbl_80562020 || !(reinterpret_cast<unsigned int *>(lbl_80562020)[0x24/4]&4)) fn_8003A8D0();
 return lbl_80562020;
}
void *igElfFile_vtableRead(){
 UnknownGenObject8003A7F8 object;
 object.unknown00=lbl_8046FAFC;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown00=lbl_8046FE98;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003A8D0(){
 fn_80066188((int)igElfFile_register);
}
void igElfFile_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80562020,(int)igProgramFile_register,(int)igElfFile_parentMeta,(int)igElfFile_getMetaCall,(int)lbl_80468468,100,(int)igElfFile_vtableRead,(int)igElfFile_fieldInit,0,0);
}
void *igElfFile_getMetaCall(){return igElfFile_getMeta();}
void *igElfFile_parentMeta(){return lbl_80562014;}
}
#pragma pop
