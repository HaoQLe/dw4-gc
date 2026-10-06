#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void arkRegister__Q33Gap4Core6igFileFv();
void fn_80021B94();
void *fn_80029E64(void *);
void fn_8002FAF4();
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80463100[];
extern char lbl_80465CF4[];
extern char lbl_80471914[];
extern char lbl_804725BC[];
extern char lbl_804726B0[];
extern char lbl_8055D464[8];
extern char lbl_8055D46C[4];
extern char lbl_8055D470[4];
extern char lbl_8055D474[4];
extern char lbl_8055D478[4];
extern void *lbl_80561B20;
extern void *lbl_80561B28;
extern void *lbl_80561B2C;
extern void *lbl_80561B34;
extern void *lbl_80561B38;
extern void *lbl_80561B3C;
extern void *lbl_805621F4;
void *fn_8002FC80();
void *fn_8002FCBC();
void fn_8002FD58();
void fn_8002FD80();
void *fn_8002FDF4();
void *fn_8002FE14();
void fn_8002FE1C();
}
struct UnknownGenRoot8002FCBC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002FCBC(){fn_800638E0(this);}
};
struct UnknownGenObject8002FCBC_0 : UnknownGenRoot8002FCBC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002FCBC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002FCBC_1 : UnknownGenObject8002FCBC_0 {
 inline ~UnknownGenObject8002FCBC_1(){unknown00=lbl_804725BC;}
};
struct UnknownGenObject8002FCBC : UnknownGenObject8002FCBC_1 {
 char unknown10[48];
 inline ~UnknownGenObject8002FCBC(){unknown00=lbl_804726B0;}
};
extern "C" {
void *fn_8002FC48(void *object){
 fn_8002FD58();
 return fn_8006546C(lbl_80561B28,object);
}
void *fn_8002FC80(){
 if(!lbl_80561B28 || !(reinterpret_cast<unsigned int *>(lbl_80561B28)[0x24/4]&4)) fn_8002FD58();
 return lbl_80561B28;
}
void *fn_8002FCBC(){
 UnknownGenObject8002FCBC object;
 object.unknown00=lbl_804725BC;
 object.unknown00=lbl_804726B0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002FD58(){
 fn_80066188((int)fn_8002FD80);
}
void fn_8002FD80(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561B28,(int)fn_8002FAF4,(int)fn_8002FE14,(int)fn_8002FDF4,(int)lbl_80465CF4,56,(int)fn_8002FCBC,(int)fn_8002FE1C,0,(int)lbl_8055D464);
}
void *fn_8002FDF4(){return fn_8002FC80();}
void *fn_8002FE14(){return lbl_80561B20;}
void fn_8002FE1C(){
 void *meta=lbl_80561B28;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D46C,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D470,lbl_8055D474,lbl_8055D478,field);
}
void fn_8002FE98(){
 if(!lbl_80561B2C){
  void *object=(lbl_80561B2C=fn_8006546C(lbl_80561B28,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561B2C));
   reinterpret_cast<short *>(lbl_80561B2C)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561B2C);
  }
 }
}
void *fn_8002FF30(){
 char *data=lbl_80463100;
 if(!lbl_80561B34) lbl_80561B34=fn_800635C8(data+0x2C5C,data+0x2C44,data+0x2C50,0x3);
 return lbl_80561B34;
}
void *fn_8002FF7C(){
 char *data=lbl_80463100;
 if(!lbl_80561B38) lbl_80561B38=fn_800635C8(data+0x2D10,data+0x2CC8,data+0x2CEC,0x9);
 return lbl_80561B38;
}
void *fn_8002FFC8(void *object){
 arkRegister__Q33Gap4Core6igFileFv();
 return fn_8006546C(lbl_80561B3C,object);
}
void *fn_80030000(){
 if(!lbl_80561B3C) lbl_80561B3C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561B3C;
}
void *fn_8003003C(){
 if(!lbl_80561B3C || !(reinterpret_cast<unsigned int *>(lbl_80561B3C)[0x24/4]&4)) arkRegister__Q33Gap4Core6igFileFv();
 return lbl_80561B3C;
}
}
#pragma pop
