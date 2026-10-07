#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void *fn_800BA194();
void *fn_800BB7B8();
void fn_801AA6DC();
void fn_801C3D40(void *,short);
void fn_801C3EF4(void *);
void fn_801C4004();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B0434[];
extern char lbl_804B044C[];
extern char lbl_804B0458[];
extern char lbl_804B70C4[];
extern char lbl_804B7120[];
extern char lbl_804B7184[];
extern char lbl_80560708[8];
extern char lbl_80560710[8];
extern char lbl_80560728[8];
extern char lbl_80560730[8];
extern char lbl_80560738[8];
extern void *lbl_805621F4;
extern void *lbl_805650AC;
extern void *lbl_805650B0;
extern void *lbl_805650BC;
void *fn_801C38BC();
void *fn_801C38F8();
void fn_801C3968();
void fn_801C3990();
void *fn_801C39FC();
void *fn_801C3A54();
void *fn_801C3A90();
void fn_801C3B18();
void fn_801C3B40();
void *fn_801C3BB8();
void fn_801C3BD8();
}
struct UnknownGenObject801C38F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C3A90 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C3A90(){fn_8006665C(this);}
};
struct UnknownGenObject801C3A90 : UnknownGenRoot801C3A90 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801C3A90(){unknown00=lbl_804B70C4;}
};
struct UnknownGenObject801C3CF8 {
 void *unknown00;
 char unknown04[524];
};
extern "C" {
void *fn_801C3880(){
 if(!lbl_805650AC) lbl_805650AC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805650AC;
}
void *fn_801C38BC(){
 if(!lbl_805650AC || !(reinterpret_cast<unsigned int *>(lbl_805650AC)[0x24/4]&4)) fn_801C3968();
 return lbl_805650AC;
}
void *fn_801C38F8(){
 UnknownGenObject801C38F8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7184;
 object.unknown00=lbl_804B7120;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C3968(){
 fn_80066188((int)fn_801C3990);
}
void fn_801C3990(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805650AC,(int)fn_8002907C,(int)fn_80024180,(int)fn_801C39FC,(int)lbl_804B0434,20,(int)fn_801C38F8,0,0,(int)lbl_80560708);
}
void *fn_801C39FC(){return fn_801C38BC();}
void *fn_801C3A1C(void *object){
 fn_801C3B18();
 return fn_8006546C(lbl_805650B0,object);
}
void *fn_801C3A54(){
 if(!lbl_805650B0 || !(reinterpret_cast<unsigned int *>(lbl_805650B0)[0x24/4]&4)) fn_801C3B18();
 return lbl_805650B0;
}
void *fn_801C3A90(){
 UnknownGenObject801C3A90 object;
 object.unknown00=lbl_804B70C4;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C3B18(){
 fn_80066188((int)fn_801C3B40);
}
void fn_801C3B40(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805650B0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801C3BB8,(int)lbl_804B0458,16,(int)fn_801C3A90,(int)fn_801C3BD8,0,(int)lbl_804B044C);
}
void *fn_801C3BB8(){return fn_801C3A54();}
void fn_801C3BD8(){
 void *value0=lbl_805650B0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560710,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800BA194();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800BB7B8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+38)=0;
 fn_800659C0(value0,lbl_80560728,lbl_80560730,lbl_80560738,value1);
}
void *fn_801C3C84(void *object){
 fn_801C4004();
 return fn_8006546C(lbl_805650BC,object);
}
void *fn_801C3CBC(){
 if(!lbl_805650BC || !(reinterpret_cast<unsigned int *>(lbl_805650BC)[0x24/4]&4)) fn_801C4004();
 return lbl_805650BC;
}
void *fn_801C3CF8(){
 UnknownGenObject801C3CF8 object;
 fn_801C3EF4(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801C3D40(&object,-1);
 return result;
}
}
#pragma pop
