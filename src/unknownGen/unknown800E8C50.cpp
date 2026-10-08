#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023670(void *);
void *fn_800607F4(void *);
void fn_800667A4(void *);
void *fn_80068430(void *);
void *fn_800D2ED0(void *);
void *fn_800D3334(void *);
void *fn_800E97C8(void *);
void *fn_800E97E0(void *);
extern void *lbl_805621E4;
extern void *lbl_80562200;
extern void *lbl_80562204;
extern void *lbl_80562208;
extern void *lbl_80562210;
extern void *lbl_80562230;
extern void *lbl_80562248;
extern char lbl_80562298[1];
extern void *lbl_80563498;
extern void *lbl_8056349C;
extern void *lbl_805634A0;
extern void *lbl_805634A4;
extern void *lbl_805634A8;
extern void *lbl_805634AC;
extern void *lbl_805634B0;
extern void *lbl_805634B4;
}
class UnknownGenV800E8C50_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void s58();
 virtual void s5C();
 virtual void s60();
 virtual void s64();
 virtual void s68();
 virtual void s6C();
 virtual void s70();
 virtual void s74();
 virtual void s78();
 virtual void s7C();
};
extern "C" {
void fn_800E8C50(int p0){
 void *value81;
 void *value82;
 void *value83;
 void *value84;
 void *value85;
 void *value86;
 void *value87;
 void *value88;
 void *value89;
 void *value90;
 void *value91;
 void *value92;
 void *value1;
 void *value2;
 void *value3;
 void *value93;
 void *value94;
 void *value95;
 void *value96;
 void *value97;
 void *value4;
 void *value5;
 void *value6;
 void *value98;
 void *value7;
 void *value8;
 void *value9;
 void *value11;
 void *value12;
 void *value13;
 void *value99;
 void *value100;
 void *value101;
 void *value102;
 void *value103;
 void *value14;
 void *value15;
 void *value16;
 void *value104;
 void *value17;
 void *value18;
 void *value19;
 void *value21;
 void *value22;
 void *value23;
 void *value105;
 void *value24;
 void *value25;
 void *value26;
 void *value28;
 void *value29;
 void *value30;
 void *value106;
 void *value107;
 void *value108;
 void *value109;
 void *value110;
 void *value31;
 void *value32;
 void *value33;
 void *value111;
 void *value34;
 void *value35;
 void *value36;
 void *value38;
 void *value39;
 void *value40;
 void *value112;
 void *value113;
 void *value114;
 void *value115;
 void *value116;
 void *value41;
 void *value42;
 void *value43;
 void *value117;
 void *value44;
 void *value45;
 void *value46;
 void *value48;
 void *value49;
 void *value50;
 void *value118;
 void *value119;
 void *value120;
 void *value121;
 void *value122;
 void *value51;
 void *value52;
 void *value53;
 void *value123;
 void *value54;
 void *value55;
 void *value56;
 void *value58;
 void *value59;
 void *value60;
 void *value124;
 void *value61;
 void *value62;
 void *value63;
 void *value65;
 void *value66;
 void *value67;
 void *value125;
 void *value126;
 void *value127;
 void *value128;
 void *value129;
 void *value68;
 void *value69;
 void *value70;
 void *value130;
 void *value71;
 void *value72;
 void *value73;
 void *value131;
 void *value132;
 void *value74;
 void *value75;
 void *value76;
 void *value133;
 void *value77;
 void *value78;
 void *value134;
 void *value135;
 void *value79;
 void *value80;
 void *value136;
 fn_800667A4((void *)p0);
 void *value0=lbl_80563498;
 if(value0){
  if(value0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
  }
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
  if(value2){
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
    fn_80066E1C(value2);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=value0;
 } else {
  value93=fn_80068430((void *)p0);
  if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
   value81=value93;
  } else {
   value94=fn_800607F4(lbl_80562230);
   value81=value94;
  }
  value95=fn_800607F4(lbl_805621E4);
  if((unsigned int)(int)value81!=(unsigned int)(int)value95){
   value96=fn_80068430((void *)p0);
   if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
    value82=value96;
   } else {
    value97=fn_800607F4(lbl_80562230);
    value82=value97;
   }
   if(value82){
    value4=*reinterpret_cast<void **>(reinterpret_cast<char *>(value82)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value82)+4)=(reinterpret_cast<char *>(value4)+1);
   }
   value5=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
   if(value5){
    value6=*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+4)=(reinterpret_cast<char *>(value6)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+4)&0x7FFFFF)){
     fn_80066E1C(value5);
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=value82;
  } else {
   value98=fn_80068430((void *)p0);
   if((int)(int)value98!=0){
    value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value98)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value98)+4)=(reinterpret_cast<char *>(value7)+1);
   }
   value8=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
   if(value8){
    value9=*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+4)=(reinterpret_cast<char *>(value9)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4)&0x7FFFFF)){
     fn_80066E1C(value8);
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=value98;
  }
 }
 void *value10=lbl_8056349C;
 if(value10){
  if(value10){
   value11=*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+4)=(reinterpret_cast<char *>(value11)+1);
  }
  value12=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
  if(value12){
   value13=*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+4)=(reinterpret_cast<char *>(value13)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4)&0x7FFFFF)){
    fn_80066E1C(value12);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=value10;
 } else {
  value99=fn_80068430((void *)p0);
  if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
   value83=value99;
  } else {
   value100=fn_800607F4(lbl_80562208);
   value83=value100;
  }
  value101=fn_800607F4(lbl_805621E4);
  if((unsigned int)(int)value83!=(unsigned int)(int)value101){
   value102=fn_80068430((void *)p0);
   if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
    value84=value102;
   } else {
    value103=fn_800607F4(lbl_80562208);
    value84=value103;
   }
   if(value84){
    value14=*reinterpret_cast<void **>(reinterpret_cast<char *>(value84)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value84)+4)=(reinterpret_cast<char *>(value14)+1);
   }
   value15=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
   if(value15){
    value16=*reinterpret_cast<void **>(reinterpret_cast<char *>(value15)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value15)+4)=(reinterpret_cast<char *>(value16)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value15)+4)&0x7FFFFF)){
     fn_80066E1C(value15);
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=value84;
  } else {
   value104=fn_80068430((void *)p0);
   if((int)(int)value104!=0){
    value17=*reinterpret_cast<void **>(reinterpret_cast<char *>(value104)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value104)+4)=(reinterpret_cast<char *>(value17)+1);
   }
   value18=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
   if(value18){
    value19=*reinterpret_cast<void **>(reinterpret_cast<char *>(value18)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value18)+4)=(reinterpret_cast<char *>(value19)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value18)+4)&0x7FFFFF)){
     fn_80066E1C(value18);
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=value104;
  }
 }
 void *value20=lbl_805634A0;
 if(value20){
  if(value20){
   value21=*reinterpret_cast<void **>(reinterpret_cast<char *>(value20)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value20)+4)=(reinterpret_cast<char *>(value21)+1);
  }
  value22=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
  if(value22){
   value23=*reinterpret_cast<void **>(reinterpret_cast<char *>(value22)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value22)+4)=(reinterpret_cast<char *>(value23)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value22)+4)&0x7FFFFF)){
    fn_80066E1C(value22);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=value20;
 } else {
  value105=fn_80068430((void *)p0);
  if((int)(int)value105!=0){
   value24=*reinterpret_cast<void **>(reinterpret_cast<char *>(value105)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value105)+4)=(reinterpret_cast<char *>(value24)+1);
  }
  value25=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
  if(value25){
   value26=*reinterpret_cast<void **>(reinterpret_cast<char *>(value25)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value25)+4)=(reinterpret_cast<char *>(value26)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value25)+4)&0x7FFFFF)){
    fn_80066E1C(value25);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=value105;
 }
 void *value27=lbl_805634A4;
 if(value27){
  if(value27){
   value28=*reinterpret_cast<void **>(reinterpret_cast<char *>(value27)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value27)+4)=(reinterpret_cast<char *>(value28)+1);
  }
  value29=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
  if(value29){
   value30=*reinterpret_cast<void **>(reinterpret_cast<char *>(value29)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value29)+4)=(reinterpret_cast<char *>(value30)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value29)+4)&0x7FFFFF)){
    fn_80066E1C(value29);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=value27;
 } else {
  value106=fn_80068430((void *)p0);
  if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
   value85=value106;
  } else {
   value107=fn_800607F4(lbl_80562204);
   value85=value107;
  }
  value108=fn_800607F4(lbl_805621E4);
  if((unsigned int)(int)value85!=(unsigned int)(int)value108){
   value109=fn_80068430((void *)p0);
   if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
    value86=value109;
   } else {
    value110=fn_800607F4(lbl_80562204);
    value86=value110;
   }
   if(value86){
    value31=*reinterpret_cast<void **>(reinterpret_cast<char *>(value86)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value86)+4)=(reinterpret_cast<char *>(value31)+1);
   }
   value32=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
   if(value32){
    value33=*reinterpret_cast<void **>(reinterpret_cast<char *>(value32)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value32)+4)=(reinterpret_cast<char *>(value33)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value32)+4)&0x7FFFFF)){
     fn_80066E1C(value32);
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=value86;
  } else {
   value111=fn_80068430((void *)p0);
   if((int)(int)value111!=0){
    value34=*reinterpret_cast<void **>(reinterpret_cast<char *>(value111)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value111)+4)=(reinterpret_cast<char *>(value34)+1);
   }
   value35=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
   if(value35){
    value36=*reinterpret_cast<void **>(reinterpret_cast<char *>(value35)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value35)+4)=(reinterpret_cast<char *>(value36)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value35)+4)&0x7FFFFF)){
     fn_80066E1C(value35);
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=value111;
  }
 }
 void *value37=lbl_805634A8;
 if(value37){
  if(value37){
   value38=*reinterpret_cast<void **>(reinterpret_cast<char *>(value37)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value37)+4)=(reinterpret_cast<char *>(value38)+1);
  }
  value39=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
  if(value39){
   value40=*reinterpret_cast<void **>(reinterpret_cast<char *>(value39)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value39)+4)=(reinterpret_cast<char *>(value40)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value39)+4)&0x7FFFFF)){
    fn_80066E1C(value39);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=value37;
 } else {
  value112=fn_80068430((void *)p0);
  if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
   value87=value112;
  } else {
   value113=fn_800607F4(lbl_80562248);
   value87=value113;
  }
  value114=fn_800607F4(lbl_805621E4);
  if((unsigned int)(int)value87!=(unsigned int)(int)value114){
   value115=fn_80068430((void *)p0);
   if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
    value88=value115;
   } else {
    value116=fn_800607F4(lbl_80562248);
    value88=value116;
   }
   if(value88){
    value41=*reinterpret_cast<void **>(reinterpret_cast<char *>(value88)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value88)+4)=(reinterpret_cast<char *>(value41)+1);
   }
   value42=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
   if(value42){
    value43=*reinterpret_cast<void **>(reinterpret_cast<char *>(value42)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value42)+4)=(reinterpret_cast<char *>(value43)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value42)+4)&0x7FFFFF)){
     fn_80066E1C(value42);
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=value88;
  } else {
   value117=fn_80068430((void *)p0);
   if((int)(int)value117!=0){
    value44=*reinterpret_cast<void **>(reinterpret_cast<char *>(value117)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value117)+4)=(reinterpret_cast<char *>(value44)+1);
   }
   value45=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
   if(value45){
    value46=*reinterpret_cast<void **>(reinterpret_cast<char *>(value45)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value45)+4)=(reinterpret_cast<char *>(value46)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value45)+4)&0x7FFFFF)){
     fn_80066E1C(value45);
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=value117;
  }
 }
 void *value47=lbl_805634AC;
 if(value47){
  if(value47){
   value48=*reinterpret_cast<void **>(reinterpret_cast<char *>(value47)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value47)+4)=(reinterpret_cast<char *>(value48)+1);
  }
  value49=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
  if(value49){
   value50=*reinterpret_cast<void **>(reinterpret_cast<char *>(value49)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value49)+4)=(reinterpret_cast<char *>(value50)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value49)+4)&0x7FFFFF)){
    fn_80066E1C(value49);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=value47;
 } else {
  value118=fn_80068430((void *)p0);
  if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
   value89=value118;
  } else {
   value119=fn_800607F4(lbl_80562210);
   value89=value119;
  }
  value120=fn_800607F4(lbl_805621E4);
  if((unsigned int)(int)value89!=(unsigned int)(int)value120){
   value121=fn_80068430((void *)p0);
   if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
    value90=value121;
   } else {
    value122=fn_800607F4(lbl_80562210);
    value90=value122;
   }
   if(value90){
    value51=*reinterpret_cast<void **>(reinterpret_cast<char *>(value90)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value90)+4)=(reinterpret_cast<char *>(value51)+1);
   }
   value52=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
   if(value52){
    value53=*reinterpret_cast<void **>(reinterpret_cast<char *>(value52)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value52)+4)=(reinterpret_cast<char *>(value53)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value52)+4)&0x7FFFFF)){
     fn_80066E1C(value52);
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=value90;
  } else {
   value123=fn_80068430((void *)p0);
   if((int)(int)value123!=0){
    value54=*reinterpret_cast<void **>(reinterpret_cast<char *>(value123)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value123)+4)=(reinterpret_cast<char *>(value54)+1);
   }
   value55=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
   if(value55){
    value56=*reinterpret_cast<void **>(reinterpret_cast<char *>(value55)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value55)+4)=(reinterpret_cast<char *>(value56)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value55)+4)&0x7FFFFF)){
     fn_80066E1C(value55);
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=value123;
  }
 }
 void *value57=lbl_805634B0;
 if(value57){
  if(value57){
   value58=*reinterpret_cast<void **>(reinterpret_cast<char *>(value57)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value57)+4)=(reinterpret_cast<char *>(value58)+1);
  }
  value59=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48);
  if(value59){
   value60=*reinterpret_cast<void **>(reinterpret_cast<char *>(value59)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value59)+4)=(reinterpret_cast<char *>(value60)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value59)+4)&0x7FFFFF)){
    fn_80066E1C(value59);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=value57;
 } else {
  value124=fn_80068430((void *)p0);
  if((int)(int)value124!=0){
   value61=*reinterpret_cast<void **>(reinterpret_cast<char *>(value124)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value124)+4)=(reinterpret_cast<char *>(value61)+1);
  }
  value62=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48);
  if(value62){
   value63=*reinterpret_cast<void **>(reinterpret_cast<char *>(value62)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value62)+4)=(reinterpret_cast<char *>(value63)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value62)+4)&0x7FFFFF)){
    fn_80066E1C(value62);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=value124;
 }
 void *value64=lbl_805634B4;
 if(value64){
  if(value64){
   value65=*reinterpret_cast<void **>(reinterpret_cast<char *>(value64)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value64)+4)=(reinterpret_cast<char *>(value65)+1);
  }
  value66=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
  if(value66){
   value67=*reinterpret_cast<void **>(reinterpret_cast<char *>(value66)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value66)+4)=(reinterpret_cast<char *>(value67)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value66)+4)&0x7FFFFF)){
    fn_80066E1C(value66);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=value64;
 } else {
  value125=fn_80068430((void *)p0);
  if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
   value91=value125;
  } else {
   value126=fn_800607F4(lbl_80562200);
   value91=value126;
  }
  value127=fn_800607F4(lbl_805621E4);
  if((unsigned int)(int)value91!=(unsigned int)(int)value127){
   value128=fn_80068430((void *)p0);
   if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
    value92=value128;
   } else {
    value129=fn_800607F4(lbl_80562200);
    value92=value129;
   }
   if(value92){
    value68=*reinterpret_cast<void **>(reinterpret_cast<char *>(value92)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value92)+4)=(reinterpret_cast<char *>(value68)+1);
   }
   value69=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
   if(value69){
    value70=*reinterpret_cast<void **>(reinterpret_cast<char *>(value69)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value69)+4)=(reinterpret_cast<char *>(value70)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value69)+4)&0x7FFFFF)){
     fn_80066E1C(value69);
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=value92;
  } else {
   value130=fn_80068430((void *)p0);
   if((int)(int)value130!=0){
    value71=*reinterpret_cast<void **>(reinterpret_cast<char *>(value130)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value130)+4)=(reinterpret_cast<char *>(value71)+1);
   }
   value72=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
   if(value72){
    value73=*reinterpret_cast<void **>(reinterpret_cast<char *>(value72)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value72)+4)=(reinterpret_cast<char *>(value73)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value72)+4)&0x7FFFFF)){
     fn_80066E1C(value72);
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=value130;
  }
 }
 value131=fn_800E97C8((void *)p0);
 value132=fn_80023670(value131);
 if((int)(int)value132!=0){
  value74=*reinterpret_cast<void **>(reinterpret_cast<char *>(value132)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value132)+4)=(reinterpret_cast<char *>(value74)+1);
 }
 value75=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56);
 if(value75){
  value76=*reinterpret_cast<void **>(reinterpret_cast<char *>(value75)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value75)+4)=(reinterpret_cast<char *>(value76)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value75)+4)&0x7FFFFF)){
   fn_80066E1C(value75);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=value132;
 reinterpret_cast<UnknownGenV800E8C50_0 *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56))->s7C();
 value133=fn_800E97E0((void *)p0);
 value77=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+304);
 if(value77){
  value78=*reinterpret_cast<void **>(reinterpret_cast<char *>(value77)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value77)+4)=(reinterpret_cast<char *>(value78)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value77)+4)&0x7FFFFF)){
   fn_80066E1C(value77);
  }
 }
 value134=fn_800D3334(value133);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+304)=value134;
 value135=fn_800E97E0((void *)p0);
 value79=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+308);
 if(value79){
  value80=*reinterpret_cast<void **>(reinterpret_cast<char *>(value79)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value79)+4)=(reinterpret_cast<char *>(value80)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value79)+4)&0x7FFFFF)){
   fn_80066E1C(value79);
  }
 }
 value136=fn_800D2ED0(value135);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+308)=value136;
}
}
#pragma pop
