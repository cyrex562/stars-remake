
undefined * __cdecl16far
FUN_1008_1cc4(undefined *param_1,undefined *param_2,undefined *param_3,int param_4,int *param_5,
             undefined6 param_6,undefined2 param_7,undefined2 param_8,undefined2 param_9,
             undefined2 param_10)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_BP;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined *puVar6;
  undefined4 in_stack_00000000;
  undefined2 in_stack_0000001c;
  undefined *puVar7;
  undefined *puVar8;
  undefined *in_stack_0000ffea;
  int in_stack_0000ffec;
  undefined *puVar9;
  int iVar10;
  undefined *in_stack_0000fff2;
  undefined2 in_stack_0000fff4;
  undefined *puVar11;
  int iVar12;

  puVar9 = param_3;
  iVar10 = param_4;
  if ((param_5 != (int *)0x0) && (param_2 != (undefined *)&DAT_10a8_0001)) {
    FUN_1008_1cc4(param_1,param_2,param_3 + -*param_5,param_4 - param_5[1],(int *)0x0,
                  CONCAT24(in_stack_0000ffea,CONCAT22(unaff_DI,unaff_SI)),in_stack_0000ffec,param_3,
                  param_4,in_stack_0000fff2);
  }
  if ((((int)PTR_DAT_10a8_0000_10a8_573a < 1) || (SBORROW2((int)PTR_DAT_10a8_0000_10a8_573a,1))) ||
     (1 < (int)(PTR_DAT_10a8_0000_10a8_573a + -1))) {
    iVar5 = 100;
    iVar4 = 0x32;
    puVar1 = PTR_DAT_10a8_0000_10a8_576e + (-8 - (int)PTR_DAT_10a8_0000_10a8_576c);
    iVar12 = 1;
    iVar2 = ((int)PTR_DAT_10a8_0000_10a8_5794 * 0xd >> 1) + 10;
    puVar11 = puVar1;
  }
  else {
    iVar5 = 200;
    puVar1 = PTR_DAT_10a8_0000_10a8_5768 + (-8 - (int)PTR_DAT_10a8_0000_10a8_576c);
    iVar12 = -1;
    iVar4 = 100;
    iVar2 = 100;
    puVar11 = PTR_DAT_10a8_0000_10a8_576e;
  }
  if ((int)(param_3 + (int)PTR_DAT_10a8_0000_10a8_576a) < 0xc6) {
    param_3 = (undefined *)(0xc6 - (int)PTR_DAT_10a8_0000_10a8_576a);
  }
  if ((int)(PTR_DAT_10a8_0000_10a8_5766 + (-(int)PTR_DAT_10a8_0000_10a8_576a - (int)param_3)) <
      iVar5) {
    param_3 = PTR_DAT_10a8_0000_10a8_5766 + (-iVar5 - (int)PTR_DAT_10a8_0000_10a8_576a);
  }
  puVar7 = param_3;
  if (((uint)param_2 & 2) != 0) {
    if ((int)(PTR_DAT_10a8_0000_10a8_576c + param_4) < iVar4) {
      param_4 = iVar4 - (int)PTR_DAT_10a8_0000_10a8_576c;
    }
    else {
      iVar4 = ((int)PTR_DAT_10a8_0000_10a8_5794 * 0xd >> 1) + 10;
      if ((int)puVar1 - param_4 < iVar4) {
        param_4 = -(iVar4 - (int)puVar1);
      }
    }
  }
  if (((uint)param_2 & 4) != 0) {
    if ((int)(puVar11 + param_4) < iVar2) {
      param_4 = (iVar2 - (int)puVar11) * iVar12;
    }
    else {
      iVar4 = (int)PTR_DAT_10a8_0000_10a8_5794 * 0xd + -0x24;
      if ((int)(PTR_DAT_10a8_0000_10a8_5768 + (-(int)PTR_DAT_10a8_0000_10a8_576e - param_4) + -8) <
          iVar4) {
        param_4 = (-(int)PTR_DAT_10a8_0000_10a8_576e - (iVar4 - (int)PTR_DAT_10a8_0000_10a8_5768)) +
                  -8;
      }
    }
  }
  if (param_5 != (int *)0x0) {
    param_3 = puVar9 + -*param_5;
    if ((int)(param_3 + (int)PTR_DAT_10a8_0000_10a8_576a) < 0xc6) {
      param_3 = (undefined *)(0xc6 - (int)PTR_DAT_10a8_0000_10a8_576a);
    }
    if ((int)(PTR_DAT_10a8_0000_10a8_5766 + (-(int)PTR_DAT_10a8_0000_10a8_576a - (int)param_3)) <
        iVar5) {
      param_3 = PTR_DAT_10a8_0000_10a8_5766 + (-iVar5 - (int)PTR_DAT_10a8_0000_10a8_576a);
    }
    in_stack_0000fff2 = puVar7 + -(int)param_3;
    in_stack_0000ffea = puVar7;
    in_stack_0000ffec = param_4;
  }
  puVar8 = PTR_DAT_10a8_0000_10a8_576c;
  if (param_2 == (undefined *)&DAT_10a8_0002) {
LAB_1008_2030:
    param_3 = (undefined *)0x0;
    puVar3 = PTR_DAT_10a8_0000_10a8_576a;
LAB_1008_208c:
    puVar6 = (undefined *)0x0;
    puVar3 = puVar3 + 1;
  }
  else {
    param_3 = puVar7;
    if (param_2 == (undefined *)&DAT_10a8_0003) {
      PATBLT(0x49,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(puVar7 + (
                                                  int)PTR_DAT_10a8_0000_10a8_576a + 1,
                                                  (qword)CONCAT24(6,CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_5768,0x5a)))))),
             (int16)CONCAT214(iVar12,CONCAT212(puVar11,CONCAT210(in_stack_0000fff4,
                                                                 CONCAT28(in_stack_0000fff2,
                                                                          CONCAT26(iVar10,CONCAT24(
                                                  puVar9,CONCAT22(in_stack_0000ffec,
                                                                  in_stack_0000ffea))))))),
             (int16)CONCAT106(CONCAT28(puVar7,CONCAT26(3,CONCAT24(param_1,in_stack_00000000))),
                              CONCAT24(unaff_BP,CONCAT22(puVar1,iVar2))),
             (int16)CONCAT214(param_9,CONCAT212(param_8,CONCAT210(param_7,CONCAT64(param_6,CONCAT22(
                                                  param_5,param_4))))),_param_10);
      puVar8 = PTR_DAT_10a8_0000_10a8_576c;
LAB_1008_2083:
      puVar3 = puVar7 + (int)PTR_DAT_10a8_0000_10a8_576a;
      goto LAB_1008_208c;
    }
    if (param_2 == (undefined *)&PTR_LOOP_10a8_0004) {
      param_3 = (undefined *)0x0;
      puVar3 = PTR_DAT_10a8_0000_10a8_5766;
      puVar8 = PTR_DAT_10a8_0000_10a8_576e;
      puVar6 = PTR_DAT_10a8_0000_10a8_576a;
      if (PTR_DAT_10a8_0000_10a8_573a == (undefined *)0x0) goto LAB_1008_2030;
    }
    else {
      if (param_2 == (undefined *)((int)&PTR_LOOP_10a8_0004 + 1)) {
        PATBLT(0x49,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(puVar7 +
                                                                                            (int)
                                                  PTR_DAT_10a8_0000_10a8_576a + 1,
                                                  (qword)CONCAT24(6,CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_5768,0x5a)))))),
               (int16)CONCAT214(iVar12,CONCAT212(puVar11,CONCAT210(in_stack_0000fff4,
                                                                   CONCAT28(in_stack_0000fff2,
                                                                            CONCAT26(iVar10,CONCAT24
                                                  (puVar9,CONCAT22(in_stack_0000ffec,
                                                                   in_stack_0000ffea))))))),
               (int16)CONCAT106(CONCAT28(puVar7,CONCAT26(5,CONCAT24(param_1,in_stack_00000000))),
                                CONCAT24(unaff_BP,CONCAT22(puVar1,iVar2))),
               (int16)CONCAT214(param_9,CONCAT212(param_8,CONCAT210(param_7,CONCAT64(param_6,
                                                  CONCAT22(param_5,param_4))))),_param_10);
        puVar8 = PTR_DAT_10a8_0000_10a8_576e;
        if (PTR_DAT_10a8_0000_10a8_573a == (undefined *)0x0) goto LAB_1008_2083;
      }
      else {
        if (param_2 != (undefined *)0x7) {
          param_4 = 0;
          if ((param_5 == (int *)0x0) ||
             (5 < (int)(((uint)in_stack_0000fff2 ^ (int)in_stack_0000fff2 >> 0xf) -
                       ((int)in_stack_0000fff2 >> 0xf)))) {
            if (param_5 != (int *)0x0) {
              PATBLT(0x49,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(
                                                  PTR_DAT_10a8_0000_10a8_576a +
                                                  (int)(puVar7 + (1 - (int)in_stack_0000fff2)),
                                                  (qword)CONCAT24(6,CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_5768,0x5a)))))),
                     (int16)CONCAT214(iVar12,CONCAT212(puVar11,CONCAT210(in_stack_0000fff4,
                                                                         CONCAT28(in_stack_0000fff2,
                                                                                  CONCAT26(iVar10,
                                                  CONCAT24(puVar9,CONCAT22(in_stack_0000ffec,
                                                                           in_stack_0000ffea))))))),
                     (int16)CONCAT106(CONCAT28(puVar7,CONCAT26(param_2,CONCAT24(param_1,
                                                  in_stack_00000000))),
                                      CONCAT24(unaff_BP,CONCAT22(puVar1,iVar2))),
                     (int16)(ZEXT1416(CONCAT212(param_9,CONCAT210(param_8,CONCAT28(param_7,CONCAT62(
                                                  param_6,param_5))))) << 0x10),_param_10);
            }
            puVar6 = puVar7 + (int)PTR_DAT_10a8_0000_10a8_576a + 1;
            puVar3 = (undefined *)0x6;
          }
          else {
            if (in_stack_0000fff2 == (undefined *)0x0) {
              return puVar7;
            }
            if ((int)in_stack_0000fff2 < 0) {
              puVar3 = (undefined *)-(int)in_stack_0000fff2;
              puVar6 = puVar7;
            }
            else {
              puVar6 = puVar7 + -(int)in_stack_0000fff2;
              puVar3 = in_stack_0000fff2;
            }
            puVar6 = puVar6 + (int)PTR_DAT_10a8_0000_10a8_576a;
            PATBLT(0x49,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(
                                                  puVar6 + 1,
                                                  (qword)CONCAT24(puVar3,CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_5768,0x5a)))))),
                   (int16)CONCAT214(iVar12,CONCAT212(puVar11,CONCAT210(in_stack_0000fff4,
                                                                       CONCAT28(in_stack_0000fff2,
                                                                                CONCAT26(iVar10,
                                                  CONCAT24(puVar9,CONCAT22(in_stack_0000ffec,
                                                                           in_stack_0000ffea))))))),
                   (int16)CONCAT106(CONCAT28(puVar7,CONCAT26(param_2,CONCAT24(param_1,
                                                  in_stack_00000000))),
                                    CONCAT24(unaff_BP,CONCAT22(puVar1,iVar2))),
                   (int16)(ZEXT1416(CONCAT212(param_9,CONCAT210(param_8,CONCAT28(param_7,CONCAT62(
                                                  param_6,param_5))))) << 0x10),_param_10);
            puVar6 = puVar6 + 7;
          }
          puVar8 = (undefined *)0x0;
          puVar7 = PTR_DAT_10a8_0000_10a8_5768;
          goto LAB_1008_20f9;
        }
        PATBLT(0x49,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(puVar7 +
                                                                                            (int)
                                                  PTR_DAT_10a8_0000_10a8_576a + 1,
                                                  (qword)CONCAT24(6,CONCAT22(
                                                  PTR_DAT_10a8_0000_10a8_5768,0x5a)))))),
               (int16)CONCAT214(iVar12,CONCAT212(puVar11,CONCAT210(in_stack_0000fff4,
                                                                   CONCAT28(in_stack_0000fff2,
                                                                            CONCAT26(iVar10,CONCAT24
                                                  (puVar9,CONCAT22(in_stack_0000ffec,
                                                                   in_stack_0000ffea))))))),
               (int16)CONCAT106(CONCAT28(puVar7,CONCAT26(7,CONCAT24(param_1,in_stack_00000000))),
                                CONCAT24(unaff_BP,CONCAT22(puVar1,iVar2))),
               (int16)CONCAT214(param_9,CONCAT212(param_8,CONCAT210(param_7,CONCAT64(param_6,
                                                  CONCAT22(param_5,param_4))))),_param_10);
        PATBLT(0x49,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,(unkuint10)
                                                                                   CONCAT26(
                                                  PTR_DAT_10a8_0000_10a8_576c + param_4 + 1,
                                                  CONCAT24(puVar7 + (int)PTR_DAT_10a8_0000_10a8_576a
                                                           + 1,0x6005a))))),
               (int16)CONCAT214(iVar12,CONCAT212(puVar11,CONCAT210(in_stack_0000fff4,
                                                                   CONCAT28(in_stack_0000fff2,
                                                                            CONCAT26(iVar10,CONCAT24
                                                  (puVar9,CONCAT22(in_stack_0000ffec,
                                                                   in_stack_0000ffea))))))),
               (int16)CONCAT106(CONCAT28(puVar7,CONCAT26(7,CONCAT24(param_1,in_stack_00000000))),
                                CONCAT24(unaff_BP,CONCAT22(puVar1,iVar2))),
               (int16)CONCAT214(param_9,CONCAT212(param_8,CONCAT210(param_7,CONCAT64(param_6,
                                                  CONCAT22(param_5,param_4))))),_param_10);
      }
      puVar3 = PTR_DAT_10a8_0000_10a8_5766 + -(int)puVar7;
      puVar6 = puVar7 + (int)PTR_DAT_10a8_0000_10a8_576a;
    }
    puVar6 = puVar6 + 7;
    puVar3 = puVar3 + (-7 - (int)PTR_DAT_10a8_0000_10a8_576a);
    puVar8 = PTR_DAT_10a8_0000_10a8_576e;
  }
  puVar8 = puVar8 + param_4 + 1;
  puVar7 = (undefined *)0x6;
LAB_1008_20f9:
  PATBLT(0x49,(int16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(param_1,CONCAT28(puVar6,
                                                  CONCAT26(puVar8,CONCAT24(puVar3,CONCAT22(puVar7,
                                                  0x5a))))))),
         (int16)CONCAT214(iVar12,CONCAT212(puVar11,CONCAT210(in_stack_0000fff4,
                                                             CONCAT28(in_stack_0000fff2,
                                                                      CONCAT26(iVar10,CONCAT24(
                                                  puVar9,CONCAT22(in_stack_0000ffec,
                                                                  in_stack_0000ffea))))))),
         (int16)CONCAT106(CONCAT28(param_3,CONCAT26(param_2,CONCAT24(param_1,in_stack_00000000))),
                          CONCAT24(unaff_BP,CONCAT22(puVar1,iVar2))),
         (int16)CONCAT214(param_9,CONCAT212(param_8,CONCAT210(param_7,CONCAT64(param_6,CONCAT22(
                                                  param_5,param_4))))),_param_10);
  return param_3;
}



undefined * __cdecl16far FUN_1008_210e(int param_1,int param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int local_4;

  puVar1 = (undefined *)0x0;
  if ((param_1 < (int)PTR_DAT_10a8_0000_10a8_576a) ||
     ((int)(PTR_DAT_10a8_0000_10a8_576a + 8) <= param_1)) {
    local_4 = 0;
  }
  else {
    local_4 = 1;
  }
  if (((param_1 < (int)(PTR_DAT_10a8_0000_10a8_576a + 8)) &&
      ((int)PTR_DAT_10a8_0000_10a8_576c <= param_2)) &&
     (param_2 < (int)(PTR_DAT_10a8_0000_10a8_576c + 8))) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if ((((int)PTR_DAT_10a8_0000_10a8_573a < 1) || (SBORROW2((int)PTR_DAT_10a8_0000_10a8_573a,1))) ||
     (1 < (int)(PTR_DAT_10a8_0000_10a8_573a + -1))) {
    if (param_1 < (int)(PTR_DAT_10a8_0000_10a8_576a + 8)) goto joined_r0x1008216e;
  }
  else if ((int)PTR_DAT_10a8_0000_10a8_576a <= param_1) {
joined_r0x1008216e:
    if (((int)PTR_DAT_10a8_0000_10a8_576e <= param_2) &&
       (param_2 < (int)(PTR_DAT_10a8_0000_10a8_576e + 8))) {
      iVar2 = 1;
      goto LAB_1008_2198;
    }
  }
  iVar2 = 0;
LAB_1008_2198:
  if (local_4 == 0) {
    if ((iVar3 != 0) || (iVar2 != 0)) {
      puVar1 = PTR_DAT_10a8_0000_10a8_59d2;
    }
  }
  else {
    puVar1 = PTR_DAT_10a8_0000_10a8_82d2;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      puVar1 = PTR_DAT_10a8_0000_10a8_5788;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (iVar2 * 2 + iVar3) * 2 + local_4;
  }
  return puVar1;
}


void __cdecl16far FUN_1008_21d8(void)

{
  int *piVar1;
  uint in_DX;
  uint uVar2;

  uVar2 = in_DX;
  if ((PTR_DAT_10a8_0000_10a8_5700 == PTR_DAT_10a8_0001_10a8_00c0) &&
     (_PTR_DAT_10a8_0000_10a8_5702 == _PTR_DAT_10a8_0000_10a8_0030)) {
    if (((byte)PTR_DAT_10a8_0000_10a8_56fa & 0xe0) == 0x40) {
      piVar1 = FUN_1010_0c48((uint)PTR_DAT_10a8_0000_10a8_56fe);
      uVar2 = in_DX | (uint)piVar1;
      if (uVar2 != 0) {
        FUN_1028_1c46(0,PTR_DAT_10a8_0000_10a8_56fe);
LAB_1008_2215:
        PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xff1f);
        in_DX = uVar2;
        goto LAB_1008_2236;
      }
      goto LAB_1008_2220;
    }
    if (((byte)PTR_DAT_10a8_0000_10a8_56fa & 0xe0) != 0x20) goto LAB_1008_2236;
    piVar1 = FUN_1010_018e((int)PTR_DAT_10a8_0000_10a8_56fe);
    uVar2 = in_DX | (uint)piVar1;
    if ((uVar2 != 0) && ((undefined *)piVar1[1] == PTR_DAT_10a8_0001_10a8_00c0)) {
      FUN_1020_24c8(0,PTR_DAT_10a8_0000_10a8_56fe);
      goto LAB_1008_2215;
    }
  }
  else {
LAB_1008_2220:
    PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xff3f | 0x20);
  }
  PTR_DAT_10a8_0000_10a8_56fe =
       (undefined *)
       *(undefined2 *)
        ((int)&PTR_DAT_10a8_0000_10a8_8865 + 1 + (int)PTR_DAT_10a8_0001_10a8_00c0 * 0x76);
  in_DX = uVar2;
LAB_1008_2236:
  if (((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xe0) != 0) {
    if (((PTR_DAT_10a8_0000_10a8_56fe == (undefined *)0xffff) ||
        (piVar1 = FUN_1010_018e((int)PTR_DAT_10a8_0000_10a8_56fe), (in_DX | (uint)piVar1) == 0)) ||
       ((undefined *)piVar1[1] != PTR_DAT_10a8_0001_10a8_00c0)) {
      FUN_1008_22ba();
    }
    else {
      FUN_1020_24c8(0,PTR_DAT_10a8_0000_10a8_56fe);
    }
    PTR_DAT_10a8_0000_10a8_56fa = (undefined *)((uint)PTR_DAT_10a8_0000_10a8_56fa & 0xff1f);
    return;
  }
  return;
}


undefined2 __cdecl16far FUN_1008_22ba(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined *in_DX;
  uint *puVar5;
  undefined *local_8;

  piVar3 = FUN_1010_018e(*(int *)((int)&PTR_DAT_10a8_0000_10a8_8865 + 1 +
                                 (int)PTR_DAT_10a8_0001_10a8_00c0 * 0x76));
  if ((((uint)in_DX | (uint)piVar3) == 0) ||
     (local_8 = in_DX, (undefined *)piVar3[1] != PTR_DAT_10a8_0001_10a8_00c0)) {
    local_8 = PTR_DAT_10a8_0000_10a8_006c;
    for (piVar3 = (int *)PTR_DAT_10a8_0000_10a8_006a;
        (piVar3 < PTR_DAT_10a8_0000_10a8_006a + (int)PTR_DAT_10a8_0000_10a8_7d52 * 0x3c &&
        ((undefined *)piVar3[1] != PTR_DAT_10a8_0001_10a8_00c0)); piVar3 = piVar3 + 0x1e) {
    }
    if ((int *)(PTR_DAT_10a8_0000_10a8_006a + (int)PTR_DAT_10a8_0000_10a8_7d52 * 0x3c) == piVar3) {
      piVar3 = (int *)0x0;
      local_8 = (undefined *)0x0;
    }
  }
  if (((uint)local_8 | (uint)piVar3) != 0) {
    FUN_1020_24c8(0,(undefined *)*piVar3);
    return 1;
  }
  iVar4 = 0;
  puVar5 = (uint *)PTR_DAT_10a8_0000_10a8_006e;
  if (0 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
    do {
      puVar1 = (undefined2 *)*puVar5;
      uVar2 = puVar5[1];
      if ((uVar2 | (uint)puVar1) == 0) {
        return 0;
      }
      if ((undefined *)puVar1[1] == PTR_DAT_10a8_0001_10a8_00c0) {
        FUN_1028_1c46(0,(undefined *)*puVar1);
        return 1;
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar4 < (int)PTR_DAT_10a8_0000_10a8_83c6);
  }
  return 0;
}


int16 * __cdecl16far
FUN_1008_239c(VA_LIST16 param_1,int16 *param_2,undefined2 param_3,HWND16 param_4,HMENU16 param_5,
             HINSTANCE16 param_6,LPVOID param_7)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int16 *piVar6;
  int16 *piVar7;
  int16 *piVar8;
  undefined4 *puVar9;
  HMENU16 HVar10;
  bool16 bVar11;
  bool16 bVar12;
  undefined *puVar13;
  HCURSOR16 HVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  HINSTANCE16 HVar18;
  int16 *in_BX;
  undefined2 unaff_BP;
  VA_LIST16 unaff_SI;
  undefined4 *puVar19;
  undefined2 unaff_DI;
  char *pcVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  undefined2 unaff_SS;
  void *pvVar23;
  LRESULT LVar24;
  undefined4 in_stack_00000000;
  undefined2 in_stack_00000014;
  HWND16 hwnd;
  undefined2 uVar25;
  byte bVar26;
  undefined uVar27;
  undefined uVar28;
  undefined2 in_stack_0000ffe6;
  undefined2 in_stack_0000ffe8;
  WPARAM16 in_stack_0000ffea;
  undefined2 in_stack_0000ffec;
  int in_stack_0000ffee;
  int in_stack_0000fff0;
  undefined4 in_stack_0000fff2;
  void *in_stack_0000fff6;
  undefined2 in_stack_0000fff8;
  undefined2 in_stack_0000fffa;
  undefined2 in_stack_0000fffc;

  if (((int16 *)0x3a97 < param_2) && (param_2 < (int16 *)0x3afc)) {
    PTR_DAT_10a8_0000_10a8_7c42 = (undefined *)(int16 *)((int)param_2 + -15000);
    return (int16 *)((int)param_2 + -15000);
  }
  if ((int16 *)0x9c < param_2) {
    if (param_2 == (int16 *)((int)s_ScannerBmp_10a8_09b8 + 10)) {
      uVar15 = 1;
      hwnd = 0xf;
      goto LAB_1008_28e4;
    }
    if (param_2 <= (int16 *)((int)s_ScannerBmp_10a8_09b8 + 10U)) {
      piVar8 = param_2;
      if (param_2 != (int16 *)((int)s_Planets_10a8_07d6 + 3)) {
        if (param_2 <= (int16 *)((int)s_Planets_10a8_07d6 + 3U)) {
          switch(param_2) {
          case (int16 *)0xfa:
          case (int16 *)0xfb:
          case (int16 *)0xfc:
          case (int16 *)0xfd:
            if (PTR_DAT_10a8_0000_10a8_0242 == (undefined *)0x0) {
              return in_BX;
            }
            piVar8 = (int16 *)POSTMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffe8,
                                                              CONCAT212(in_stack_0000ffe6,
                                                                        CONCAT210(unaff_DI,CONCAT28(
                                                  unaff_SI,CONCAT26(PTR_DAT_10a8_0000_10a8_0242,
                                                                    CONCAT15(1,CONCAT14(0x11,(ulong)
                                                  ((int)param_2 - 0xfa) << 0x10))))))),
                                          in_stack_0000ffea,
                                          CONCAT22(in_stack_0000ffee,in_stack_0000ffec));
            return piVar8;
          default:
            goto switchD_1008_2453_caseD_fe;
          case (int16 *)0x100:
            goto switchD_1008_2453_caseD_100;
          case (int16 *)0x101:
            goto switchD_1008_2453_caseD_101;
          case (int16 *)0x10e:
            if (_PTR_DAT_10a8_0000_10a8_0030 == 0) {
              return in_BX;
            }
            if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
              return in_BX;
            }
            if (((byte)PTR_DAT_10a8_0000_10a8_0040 & 4) != 0) {
              return in_BX;
            }
            piVar8 = FUN_1010_26a0();
            if (piVar8 == (int16 *)0x0) {
              return (int16 *)0x0;
            }
            pvVar23 = MAKEPROCINSTANCE((void *)CONCAT13(0x28,CONCAT12(0xee,
                                                  PTR_DAT_10a8_0000_10a8_839a)),0x1010);
            HVar18 = (HINSTANCE16)((ulong)pvVar23 >> 0x10);
            piVar8 = (int16 *)pvVar23;
            iVar17 = 0x8d;
            param_1 = (VA_LIST16)PTR_DAT_10a8_0000_10a8_58b4;
            goto LAB_1008_2531;
          }
        }
        if (param_2 <= (int16 *)((int)s_Planets_10a8_07d6 + 6U)) {
          if ((int16 *)((int)s_Planets_10a8_07d6 + 4U) < param_2) {
            if (_PTR_DAT_10a8_0000_10a8_0030 == 0) {
              return param_2;
            }
            if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
              return param_2;
            }
            pvVar23 = MAKEPROCINSTANCE((void *)CONCAT13(4,CONCAT12(0x90,PTR_DAT_10a8_0000_10a8_839a)
                                                       ),(int)s_COMBOBOX_10a8_1085 + 3);
            HVar18 = (HINSTANCE16)((ulong)pvVar23 >> 0x10);
            piVar8 = (int16 *)pvVar23;
            iVar17 = 0x7dd;
            param_1 = (VA_LIST16)PTR_DAT_10a8_0000_10a8_58b4;
            goto LAB_1008_2531;
          }
          in_BX = (int16 *)((int)param_2 + -0x7da);
          if (in_BX != (int16 *)0x0) goto switchD_1008_2453_caseD_fe;
          goto switchD_1008_23d7_caseD_6a;
        }
        piVar8 = (int16 *)((int)param_2 + -0x7de);
        if (piVar8 != (int16 *)0x0) {
          if (param_2 != (int16 *)0x803) goto switchD_1008_2453_caseD_fe;
          if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
            return (int16 *)0x0;
          }
          pvVar23 = MAKEPROCINSTANCE((void *)CONCAT13(0x1d,CONCAT12(0x86,PTR_DAT_10a8_0000_10a8_839a
                                                                   )),0x1068);
          HVar18 = (HINSTANCE16)((ulong)pvVar23 >> 0x10);
          piVar8 = (int16 *)pvVar23;
          iVar17 = 0x802;
          goto LAB_1008_2531;
        }
      }
      if (_PTR_DAT_10a8_0000_10a8_0030 == 0) {
        return piVar8;
      }
      if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
        return piVar8;
      }
      if (((byte)PTR_DAT_10a8_0000_10a8_0040 & 4) != 0) {
        return piVar8;
      }
      pvVar23 = MAKEPROCINSTANCE((void *)ZEXT24(PTR_DAT_10a8_0000_10a8_839a),
                                 (int)s_COMBOBOX_10a8_1085 + 3);
      HVar18 = (HINSTANCE16)((ulong)pvVar23 >> 0x10);
      piVar8 = (int16 *)pvVar23;
      iVar17 = 0x7d8;
      param_1 = (VA_LIST16)PTR_DAT_10a8_0000_10a8_58b4;
      goto LAB_1008_2531;
    }
    if ((int16 *)((int)s_Est__Range_10a8_0ed7 + 4U) < param_2) {
      if ((int16 *)0xf44 < param_2) {
        if (param_2 == (int16 *)0xfa1) {
          if (PTR_DAT_10a8_0000_10a8_00c4 == (undefined *)0x0) {
            return (int16 *)0x0;
          }
          UPDATEWINDOW((HWND16)PTR_DAT_10a8_0000_10a8_00c4);
          FUN_1008_21d8();
          goto LAB_1008_2871;
        }
        if (((uint)&PTR_DAT_10a8_0000_10a8_00c6 < (int)param_2 - 0xfa1U) &&
           (param_2 == (int16 *)0x1068 || (int16 *)((int)param_2 + -0x1069) == (int16 *)0x0)) {
          if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
            return (int16 *)((int)param_2 + -0x1069);
          }
          pvVar23 = MAKEPROCINSTANCE((void *)CONCAT13(0x3c,CONCAT12(0xca,PTR_DAT_10a8_0000_10a8_839a
                                                                   )),(HANDLE16)&DAT_10a8_1030);
          HVar18 = (HINSTANCE16)((ulong)pvVar23 >> 0x10);
          piVar8 = (int16 *)pvVar23;
          iVar17 = (int)s_Delete_10a8_1069 + 1;
          goto LAB_1008_2531;
        }
        goto switchD_1008_2453_caseD_fe;
      }
      if (param_2 <= (int16 *)((int)s_Deep_Space_10a8_0f36 + 6U)) {
        if (param_2 != (int16 *)s_Infinite_10a8_0ee2) goto switchD_1008_2453_caseD_fe;
        uVar25 = 0;
        uVar27 = 0x10;
        uVar28 = 0;
        goto LAB_1008_2a6d;
      }
      if (PTR_DAT_10a8_0000_10a8_00c4 != (undefined *)0x0) {
        uVar25 = FUN_1008_5196(param_1,1);
        HVar10 = GETSUBMENU(1,(int16)CONCAT214(in_stack_0000ffee,
                                               CONCAT212(in_stack_0000ffec,
                                                         CONCAT210(in_stack_0000ffea,
                                                                   CONCAT28(in_stack_0000ffe8,
                                                                            CONCAT26(
                                                  in_stack_0000ffe6,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,uVar25))))))))
        ;
        CHECKMENUITEM(0x400,(uint16)CONCAT214(in_stack_0000ffec,
                                              CONCAT212(in_stack_0000ffea,
                                                        CONCAT210(in_stack_0000ffe8,
                                                                  CONCAT28(in_stack_0000ffe6,
                                                                           CONCAT26(unaff_DI,
                                                  CONCAT24(unaff_SI,CONCAT22(HVar10,
                                                  PTR_DAT_10a8_0000_10a8_08b2 + 3))))))),
                      (uint16)CONCAT214(in_stack_0000fffc,
                                        CONCAT212(in_stack_0000fffa,
                                                  CONCAT210(in_stack_0000fff8,
                                                            CONCAT28(in_stack_0000fff6,
                                                                     CONCAT44(in_stack_0000fff2,
                                                                              CONCAT22(
                                                  in_stack_0000fff0,in_stack_0000ffee)))))));
        GETCLIENTRECT((HWND16)&stack0xffea,(RECT16 *)CONCAT22(PTR_DAT_10a8_0000_10a8_00c4,unaff_SS))
        ;
        iVar17 = FUN_1030_08e0(in_stack_0000ffee);
        bVar11 = iVar17 >> 1;
        iVar17 = FUN_1030_08e0(in_stack_0000fff0);
        bVar12 = iVar17 >> 1;
        iVar17 = (int)PTR_PTR_10a8_0066 - (int)PTR_DAT_10a8_0000_10a8_589c;
        PTR_DAT_10a8_0000_10a8_08b2 = (undefined *)(param_2 + -0xf4);
        puVar13 = PTR_DAT_10a8_0000_10a8_589e;
        CHECKMENUITEM(0x408,(uint16)CONCAT214(in_stack_0000ffec,
                                              CONCAT212(in_stack_0000ffea,
                                                        CONCAT210(in_stack_0000ffe8,
                                                                  CONCAT28(in_stack_0000ffe6,
                                                                           CONCAT26(unaff_DI,
                                                  CONCAT24(unaff_SI,CONCAT22(HVar10,(int)param_2 +
                                                                                    -0xf3d))))))),
                      (uint16)CONCAT214(iVar17,CONCAT212(PTR_DAT_10a8_0000_10a8_589e,
                                                         CONCAT210(in_stack_0000fff8,
                                                                   CONCAT28(in_stack_0000fff6,
                                                                            CONCAT44(
                                                  in_stack_0000fff2,CONCAT22(bVar12,bVar11)))))));
        DRAWMENUBAR((HWND16)param_1);
        FUN_1030_2b72(PTR_DAT_10a8_0000_10a8_00c4,
                      CONCAT210(in_stack_0000ffec,
                                CONCAT28(in_stack_0000ffea,
                                         CONCAT26(in_stack_0000ffe8,
                                                  CONCAT24(in_stack_0000ffe6,
                                                           CONCAT22(unaff_DI,unaff_SI))))),bVar11,
                      bVar12);
        INVALIDATERECT(1,(RECT16 *)0x0,0);
        if (PTR_DAT_10a8_0000_10a8_7b58 == (undefined *)0x0) {
          puVar13 = puVar13 + bVar11;
          iVar17 = iVar17 - bVar12;
        }
        else {
          puVar13 = (undefined *)_PTR_DAT_10a8_0000_10a8_7b54;
          iVar17 = (int)((ulong)_PTR_DAT_10a8_0000_10a8_7b54 >> 0x10);
        }
        FUN_1030_2fe2((int)puVar13,iVar17,0);
        piVar8 = (int16 *)FUN_1030_2b48();
        return piVar8;
      }
      uVar27 = 7;
      uVar28 = 0;
      goto LAB_1008_2669;
    }
    if ((int16 *)((int)s_Est__Range_10a8_0ed7 + 2U) < param_2) goto switchD_1008_23d7_caseD_6f;
    if (param_2 <= (int16 *)((int)s_UnknownPlanetBmp_10a8_09c3 + 2U)) {
      if (param_2 <= (int16 *)s_UnknownPlanetBmp_10a8_09c3) {
        if (param_2 == (int16 *)s_UnknownPlanetBmp_10a8_09c3) {
          uVar15 = 1;
          hwnd = 8;
          goto LAB_1008_28e4;
        }
        goto switchD_1008_2453_caseD_fe;
      }
      if ((_DAT_10a8_0a46 & 0x4000) != 0) {
        piVar8 = (int16 *)FUN_1090_84c2(1,unaff_SI);
        return piVar8;
      }
      goto LAB_1008_2633;
    }
    if (param_2 == (int16 *)((int)s_Est__Range_10a8_0ed7 + 1)) goto switchD_1008_23d7_caseD_6e;
    if (param_2 != (int16 *)((int)s_Est__Range_10a8_0ed7 + 2)) goto switchD_1008_2453_caseD_fe;
switchD_1008_23d7_caseD_6d:
    if (((_DAT_10a8_0a46 & 0x4000) != 0) && (iVar17 = FUN_1090_8a38(), iVar17 == 0)) {
      return (int16 *)0x0;
    }
    piVar8 = (int16 *)FUN_1008_532c((undefined *)param_1,0);
    if ((int)piVar8 < 1) {
      return piVar8;
    }
    piVar8 = (int16 *)FUN_1008_2db8(0,(undefined1  [10])
                                      CONCAT28(in_stack_0000ffea,
                                               CONCAT26(in_stack_0000ffe8,
                                                        CONCAT24(in_stack_0000ffe6,
                                                                 CONCAT22(unaff_DI,unaff_SI)))));
    if (PTR_DAT_10a8_0000_10a8_00d0 == (undefined *)0x0) {
      piVar8 = (int16 *)POSTMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffe8,
                                                        CONCAT212(in_stack_0000ffe6,
                                                                  CONCAT210(unaff_DI,CONCAT28(
                                                  unaff_SI,CONCAT26(param_1,0x1110fa10000))))),
                                    in_stack_0000ffea,CONCAT22(in_stack_0000ffee,in_stack_0000ffec))
      ;
    }
    if (((byte)PTR_DAT_10a8_0000_10a8_0040 & 8) == 0) {
      return piVar8;
    }
    if (PTR_DAT_10a8_0001_10a8_00c0 != (undefined *)0x0) {
      return piVar8;
    }
LAB_1008_2633:
    piVar8 = (int16 *)FUN_1090_86cc(0);
    return piVar8;
  }
  if ((int16 *)0x9a < param_2) {
    if (_PTR_DAT_10a8_0000_10a8_0030 == 0) {
      return param_2;
    }
    if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
      return param_2;
    }
    puVar9 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_8166;
    puVar19 = (undefined4 *)((int)PTR_DAT_10a8_0001_10a8_00c0 * 0x76 + -0x77a2);
    for (iVar17 = 0x1d; iVar17 != 0; iVar17 = iVar17 + -1) {
      puVar5 = puVar9;
      puVar9 = puVar9 + 1;
      puVar2 = puVar19;
      puVar19 = puVar19 + 1;
      *puVar5 = *puVar2;
    }
    *(undefined2 *)puVar9 = *(undefined2 *)puVar19;
    bVar26 = 1;
LAB_1008_2831:
    piVar8 = (int16 *)FUN_1078_0000((undefined *)param_1,(undefined *)(uint)bVar26,0);
    return piVar8;
  }
  switch(param_2) {
  case (int16 *)0x5f:
  case (int16 *)0x60:
    if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
      return in_BX;
    }
    pvVar23 = MAKEPROCINSTANCE((void *)ZEXT24(PTR_DAT_10a8_0000_10a8_839a),
                               (HANDLE16)s_Everybody_10a8_1098);
    HVar18 = (HINSTANCE16)((ulong)pvVar23 >> 0x10);
    piVar8 = (int16 *)pvVar23;
    iVar17 = 0x5e;
    goto LAB_1008_2531;
  default:
    break;
  case (int16 *)0x63:
    pvVar23 = MAKEPROCINSTANCE((void *)CONCAT13(0x4e,CONCAT12(0xf4,PTR_DAT_10a8_0000_10a8_839a)),
                               (int)s_backup_d_10a8_1001 + 7);
    HVar18 = (HINSTANCE16)((ulong)pvVar23 >> 0x10);
    piVar8 = (int16 *)pvVar23;
    iVar17 = 0x5a;
LAB_1008_2531:
    piVar6 = DIALOGBOX(piVar8,HVar18,(LPCSTR)CONCAT22(iVar17,param_1),0,PTR_DAT_10a8_0000_10a8_839a)
    ;
    FREEPROCINSTANCE((void *)CONCAT22(HVar18,piVar8));
    return piVar6;
  case (int16 *)0x67:
  case (int16 *)0x68:
    if ((PTR_DAT_10a8_0000_10a8_7b4c == (undefined *)&DAT_10a8_0002) &&
       (puVar13 = (undefined *)GETFOCUS(), puVar13 != PTR_DAT_10a8_0000_10a8_0aa4)) {
      FUN_1028_4cea((uint)(param_2 == (int16 *)((int)&PTR_PTR_10a8_0066 + 1)));
    }
    break;
  case (int16 *)0x69:
    goto switchD_1008_23d7_caseD_69;
  case (int16 *)0x6a:
    goto switchD_1008_23d7_caseD_6a;
  case (int16 *)0x6c:
    goto switchD_1008_23d7_caseD_6c;
  case (int16 *)0x6d:
    goto switchD_1008_23d7_caseD_6d;
  case (int16 *)0x6e:
switchD_1008_23d7_caseD_6e:
    if (((_DAT_10a8_0a46 & 0x4000) != 0) && (iVar17 = FUN_1090_8a38(), iVar17 == 0)) {
      return (int16 *)0x0;
    }
    piVar8 = (int16 *)FUN_1008_4138(param_1);
    return piVar8;
  case (int16 *)0x6f:
switchD_1008_23d7_caseD_6f:
    if (PTR_DAT_10a8_0000_10a8_00c4 == (undefined *)0x0) {
      uVar27 = 6;
      uVar28 = 0;
      goto LAB_1008_2669;
    }
    if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
      piVar8 = (int16 *)FUN_1040_230a((VA_LIST16)&DAT_10a8_85dc,(undefined *)0xffff,0);
      return piVar8;
    }
    iVar17 = FUN_1040_1d0a((int)PTR_DAT_10a8_0001_10a8_00c0);
    if (iVar17 == 0) {
      if (param_2 == (int16 *)((int)s_Est__Range_10a8_0ed7 + 4)) {
        iVar17 = 1;
      }
      _DAT_10a8_0a46 = _DAT_10a8_0a46 ^ (byte)((char)iVar17 << 4 ^ DAT_10a8_0a46) & 0x10;
      FUN_1020_5b78((char *)&DAT_10a8_85dc,PTR_DAT_10a8_0001_10a8_00c0);
      piVar8 = (int16 *)FUN_1020_5cd2((uint16 *)PTR_DAT_10a8_0001_10a8_00c0);
      return piVar8;
    }
    goto LAB_1008_2d24;
  case (int16 *)0x71:
    if (((_DAT_10a8_0a46 & 0x4000) != 0) && (iVar17 = FUN_1090_8a38(), iVar17 == 0)) {
      return (int16 *)0x0;
    }
    FUN_1008_6c82();
    FUN_1040_190c();
    pcVar20 = (char *)&DAT_10a8_86de;
    uVar15 = 0xffff;
    do {
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar3 = pcVar20;
      pcVar20 = pcVar20 + 1;
    } while (*pcVar3 != '\0');
    uVar15 = ~uVar15;
    puVar21 = (undefined2 *)(pcVar20 + -uVar15);
    puVar22 = (undefined2 *)&DAT_10a8_85dc;
    for (uVar16 = uVar15 >> 1; uVar16 != 0; uVar16 = uVar16 - 1) {
      puVar4 = puVar22;
      puVar22 = puVar22 + 1;
      puVar1 = puVar21;
      puVar21 = puVar21 + 1;
      *puVar4 = *puVar1;
    }
    for (uVar15 = (uint)((uVar15 & 1) != 0); uVar15 != 0; uVar15 = uVar15 - 1) {
      puVar4 = puVar22;
      puVar22 = (undefined2 *)((int)puVar22 + 1);
      puVar1 = puVar21;
      puVar21 = (undefined2 *)((int)puVar21 + 1);
      *(undefined *)puVar4 = *(undefined *)puVar1;
    }
    PTR_DAT_10a8_0000_10a8_56fa._0_1_ = (byte)PTR_DAT_10a8_0000_10a8_56fa & 0x1f;
    PTR_DAT_10a8_0000_10a8_56fe = (undefined *)0x0;
    PTR_DAT_10a8_0000_10a8_5700 = (undefined *)0xffff;
    FUN_1008_2db8(0,(undefined1  [10])
                    CONCAT28(in_stack_0000ffea,
                             CONCAT26(in_stack_0000ffe8,
                                      CONCAT24(in_stack_0000ffe6,CONCAT22(unaff_DI,unaff_SI)))));
    uVar25 = 0;
    piVar8 = GETSYSTEMMETRICS((int16 *)0x0,
                              (int16)CONCAT214(in_stack_0000fff0,
                                               CONCAT212(in_stack_0000ffee,
                                                         CONCAT210(in_stack_0000ffec,
                                                                   CONCAT28(in_stack_0000ffea,
                                                                            CONCAT26(
                                                  in_stack_0000ffe8,
                                                  CONCAT24(in_stack_0000ffe6,
                                                           CONCAT22(unaff_DI,unaff_SI))))))));
    uVar27 = 1;
    uVar28 = 0;
    piVar6 = GETSYSTEMMETRICS((int16 *)&DAT_10a8_0001,
                              (int16)CONCAT214(in_stack_0000ffee,
                                               CONCAT212(in_stack_0000ffec,
                                                         CONCAT210(in_stack_0000ffea,
                                                                   CONCAT28(in_stack_0000ffe8,
                                                                            CONCAT26(
                                                  in_stack_0000ffe6,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,uVar25))))))))
    ;
    PTR_DAT_10a8_0000_10a8_0242 =
         (undefined *)
         CREATEWINDOW((LPCSTR)0x0,(LPCSTR)ZEXT24(PTR_DAT_10a8_0000_10a8_839a),
                      CONCAT22(piVar6,param_1),
                      (int16)CONCAT214(300,CONCAT212(0x10a8,CONCAT210(0x32e,CONCAT28(0x9000,ZEXT28(
                                                  piVar8))))),
                      (int16)CONCAT214(in_stack_0000ffea,
                                       CONCAT212(in_stack_0000ffe8,
                                                 CONCAT210(in_stack_0000ffe6,
                                                           CONCAT28(unaff_DI,CONCAT26(unaff_SI,
                                                  CONCAT24(uVar25,CONCAT13(uVar28,CONCAT12(uVar27,
                                                  0x10a8)))))))),
                      (int16)CONCAT214(piVar8,CONCAT212(in_stack_0000fff8,
                                                        CONCAT210(in_stack_0000fff6,
                                                                  CONCAT46(in_stack_0000fff2,
                                                                           CONCAT24(
                                                  in_stack_0000fff0,
                                                  CONCAT22(in_stack_0000ffee,in_stack_0000ffec))))))
                      ,(int16)CONCAT124(CONCAT210(param_4,CONCAT28(param_3,CONCAT26(param_2,CONCAT24
                                                  (param_1,in_stack_00000000)))),
                                        CONCAT22(unaff_BP,piVar6)),param_5,param_6,
                      (HINSTANCE16)param_7,(LPVOID)CONCAT22(in_stack_00000014,param_7._2_2_));
    PTR_DAT_10a8_0000_10a8_0244 = (undefined *)0x0;
    piVar8 = (int16 *)SHOWWINDOW(0,(int16)CONCAT214(in_stack_0000ffee,
                                                    CONCAT212(in_stack_0000ffec,
                                                              CONCAT210(in_stack_0000ffea,
                                                                        CONCAT28(in_stack_0000ffe8,
                                                                                 CONCAT26(
                                                  in_stack_0000ffe6,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,
                                                  PTR_DAT_10a8_0000_10a8_58b4))))))));
    return piVar8;
  case (int16 *)0x7d:
  case (int16 *)0x89:
    if (_PTR_DAT_10a8_0000_10a8_0030 == 0) {
      return in_BX;
    }
    if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
      return in_BX;
    }
    piVar8 = (int16 *)FUN_1060_0000(0x1c20262);
    return piVar8;
  case (int16 *)0x7e:
  case (int16 *)0x87:
    if (_PTR_DAT_10a8_0000_10a8_0030 == 0) {
      return in_BX;
    }
    if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
      return in_BX;
    }
    pvVar23 = MAKEPROCINSTANCE((void *)ZEXT24(PTR_DAT_10a8_0000_10a8_839a),0x1070);
    HVar18 = (HINSTANCE16)((ulong)pvVar23 >> 0x10);
    piVar8 = (int16 *)pvVar23;
    piVar7 = DIALOGBOX(piVar8,HVar18,(LPCSTR)CONCAT22(0x7f,PTR_DAT_10a8_0000_10a8_58b4),0,
                       PTR_DAT_10a8_0000_10a8_839a);
    piVar6 = piVar7;
    FREEPROCINSTANCE((void *)CONCAT22(HVar18,piVar8));
    if (piVar7 == (int16 *)0x0) {
      return piVar6;
    }
    if (PTR_DAT_10a8_0000_10a8_7b4c != (undefined *)&DAT_10a8_0001) {
      return piVar6;
    }
    if (_PTR_DAT_10a8_0000_10a8_7c0e != 0) {
      FUN_1020_3370(PTR_DAT_10a8_0000_10a8_8346,_PTR_DAT_10a8_0000_10a8_7c0e);
    }
    piVar8 = (int16 *)FUN_1020_0736((int16 *)0x0,0x48);
    return piVar8;
  case (int16 *)0x81:
    puVar9 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_8166;
    puVar19 = (undefined4 *)&DAT_10a8_446e;
    for (iVar17 = 0x1d; iVar17 != 0; iVar17 = iVar17 + -1) {
      puVar5 = puVar9;
      puVar9 = puVar9 + 1;
      puVar2 = puVar19;
      puVar19 = puVar19 + 1;
      *puVar5 = *puVar2;
    }
    *(undefined2 *)puVar9 = *(undefined2 *)puVar19;
    bVar26 = 0;
    goto LAB_1008_2831;
  case (int16 *)0x82:
  case (int16 *)0x83:
  case (int16 *)0x84:
    if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
      return in_BX;
    }
    PTR_DAT_10a8_0000_10a8_573a = (undefined *)((int)param_2 + -0x82);
    INVALIDATERECT(1,(RECT16 *)0x0,0);
    FUN_1020_2dd0((uint)(PTR_DAT_10a8_0000_10a8_573a == (undefined *)&DAT_10a8_0002));
LAB_1008_2871:
    piVar8 = (int16 *)FUN_1008_71ca();
    return piVar8;
  case (int16 *)0x88:
switchD_1008_2453_caseD_100:
    if (_PTR_DAT_10a8_0000_10a8_0030 == 0) {
      return in_BX;
    }
    if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
      return in_BX;
    }
    if (PTR_DAT_10a8_0000_10a8_00c2 == (undefined *)0x0) {
      HVar10 = 8;
      CREATEDIALOG((HINSTANCE16)_PTR_DAT_10a8_0000_10a8_82d4,
                   (LPCSTR)CONCAT22(PTR_DAT_10a8_0000_10a8_58b4,
                                    (int)((ulong)_PTR_DAT_10a8_0000_10a8_82d4 >> 0x10)),0x80,
                   (void *)0x0);
    }
    else {
      HVar10 = 0;
      DESTROYWINDOW((HWND16)PTR_DAT_10a8_0000_10a8_00c2);
    }
    uVar25 = FUN_1008_5196(param_1,4);
    piVar8 = (int16 *)CHECKMENUITEM(HVar10,(uint16)CONCAT214(in_stack_0000ffec,
                                                             CONCAT212(in_stack_0000ffea,
                                                                       CONCAT210(in_stack_0000ffe8,
                                                                                 CONCAT28(
                                                  in_stack_0000ffe6,
                                                  CONCAT26(unaff_DI,CONCAT24(unaff_SI,CONCAT22(
                                                  uVar25,0x100))))))),
                                    (uint16)CONCAT214(in_stack_0000fffc,
                                                      CONCAT212(in_stack_0000fffa,
                                                                CONCAT210(in_stack_0000fff8,
                                                                          CONCAT28(in_stack_0000fff6
                                                                                   ,CONCAT44(
                                                  in_stack_0000fff2,
                                                  CONCAT22(in_stack_0000fff0,in_stack_0000ffee))))))
                                   );
    return piVar8;
  case (int16 *)0x8a:
switchD_1008_2453_caseD_101:
    uVar15 = 3;
    hwnd = 0;
LAB_1008_28e4:
    piVar8 = (int16 *)WINHELP(hwnd,(LPCSTR)((ulong)uVar15 << 0x10),
                              (uint16)CONCAT214(in_stack_0000ffea,
                                                CONCAT212(in_stack_0000ffe8,
                                                          CONCAT210(in_stack_0000ffe6,
                                                                    CONCAT28(unaff_DI,CONCAT26(
                                                  unaff_SI,CONCAT24(param_1,CONCAT13(0x10,CONCAT12(
                                                  0xa8,PTR_s_stars__hlp_10a8_00b2_10a8_00be)))))))))
    ;
    return piVar8;
  }
switchD_1008_2453_caseD_fe:
  LVar24 = DEFWINDOWPROC(0,(uint16)CONCAT214(in_stack_0000ffe8,
                                             CONCAT212(in_stack_0000ffe6,
                                                       CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26
                                                  (param_1,CONCAT15(1,CONCAT14(0x11,ZEXT24(param_2)
                                                                                    << 0x10))))))),
                         in_stack_0000ffea,CONCAT22(in_stack_0000ffee,in_stack_0000ffec));
  return (int16 *)LVar24;
switchD_1008_23d7_caseD_69:
  if ((((byte)PTR_DAT_10a8_0000_10a8_0040 & 4) == 0) &&
     (in_BX = (int16 *)FUN_1018_50b2(0x50,(HWND16)s_Robo_Miner_10a8_2024), in_BX != (int16 *)0x6)) {
    return in_BX;
  }
switchD_1008_23d7_caseD_6c:
  puVar13 = PTR_DAT_10a8_0001_10a8_00c0;
  if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
    return in_BX;
  }
  if ((_DAT_10a8_0a46 & 0x4000) != 0) {
    FUN_1090_88fa();
    if ((_DAT_10a8_8318 & 8) == 0) {
      uVar27 = 0x46;
      uVar28 = 1;
      goto LAB_1008_2669;
    }
    FUN_1090_84c2(0,unaff_SI);
    in_BX = (int16 *)FUN_1018_49f0(0x2d2);
  }
  if (((byte)PTR_DAT_10a8_0000_10a8_0040 & 4) == 0) {
switchD_1008_23d7_caseD_6a:
    if (_PTR_DAT_10a8_0000_10a8_006a == 0) {
      return in_BX;
    }
    if (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0xffff) {
      return in_BX;
    }
    if (((byte)PTR_DAT_10a8_0000_10a8_0040 & 4) != 0) {
      return in_BX;
    }
    iVar17 = FUN_1040_1d0a((int)PTR_DAT_10a8_0001_10a8_00c0);
    if (iVar17 == 0) {
      _DAT_10a8_0a46 = _DAT_10a8_0a46 | 0x10;
      FUN_1020_5b78((char *)&DAT_10a8_85dc,PTR_DAT_10a8_0001_10a8_00c0);
      FUN_1020_5cd2((uint16 *)PTR_DAT_10a8_0001_10a8_00c0);
      uVar27 = 0xa8;
      uVar28 = 0x10;
      uVar25 = 0x317;
      puVar13 = PTR_DAT_10a8_0000_10a8_58b4;
      SETWINDOWTEXT(0x317,CONCAT22(PTR_DAT_10a8_0000_10a8_58b4,0x10a8));
      SHOWWINDOW(2,(int16)CONCAT214(in_stack_0000ffe8,
                                    CONCAT212(in_stack_0000ffe6,
                                              CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(puVar13,
                                                  CONCAT15(uVar28,CONCAT14(uVar27,CONCAT22(uVar25,
                                                  PTR_DAT_10a8_0000_10a8_58b4)))))))));
      PTR_DAT_10a8_0000_10a8_00d0 =
           (undefined *)
           SETTIMER((uint16 *)_PTR_DAT_10a8_0000_10a8_830a,
                    (HWND16)((ulong)_PTR_DAT_10a8_0000_10a8_830a >> 0x10),
                    (uint16)CONCAT214(unaff_DI,CONCAT212(unaff_SI,CONCAT210(puVar13,CONCAT19(uVar28,
                                                  CONCAT18(uVar27,CONCAT26(uVar25,0xe2710)))))),
                    (uint16)CONCAT412(in_stack_0000fff2,
                                      CONCAT210(in_stack_0000fff0,
                                                CONCAT28(in_stack_0000ffee,
                                                         CONCAT26(in_stack_0000ffec,
                                                                  CONCAT24(in_stack_0000ffea,
                                                                           CONCAT22(
                                                  in_stack_0000ffe8,in_stack_0000ffe6)))))),
                    in_stack_0000fff6);
      PTR_DAT_10a8_0000_10a8_00d2 = (undefined *)0xe;
      piVar8 = (int16 *)FUN_1008_61f2((void *)0x0);
      return piVar8;
    }
LAB_1008_2d24:
    FUN_1020_5cd2((uint16 *)PTR_DAT_10a8_0001_10a8_00c0);
    if (PTR_DAT_10a8_0000_10a8_003e == (undefined *)0x0) {
      FUN_1018_50b2(0x201,0x40);
    }
    else {
      iVar17 = FUN_1018_50b2(0x202,0x31);
      if (iVar17 == 2) {
        return (int16 *)&DAT_10a8_0002;
      }
    }
    _WSPRINTF((int16 *)&stack0xfff2,(LPSTR)CONCAT22(0x313,unaff_SS),
              (LPCSTR)CONCAT22(PTR_DAT_10a8_0001_10a8_00c0 + 1,0x10a8),unaff_SI);
    PTR_DAT_10a8_0000_10a8_003e = (undefined *)0x0;
    FUN_1040_190c();
    iVar17 = FUN_1040_02ec((VA_LIST16)&DAT_10a8_85dc,&stack0xfff2);
    if (iVar17 != 0) {
      window_op_1008_0ede();
      uVar25 = 0xfa1;
      uVar27 = 0x11;
      uVar28 = 1;
      param_1 = (VA_LIST16)PTR_DAT_10a8_0000_10a8_58b4;
LAB_1008_2a6d:
      LVar24 = SENDMESSAGE(0,(uint16)(ZEXT1416(CONCAT212(in_stack_0000ffe8,
                                                         CONCAT210(in_stack_0000ffe6,
                                                                   CONCAT28(unaff_DI,CONCAT26(
                                                  unaff_SI,CONCAT24(param_1,CONCAT13(uVar28,CONCAT12
                                                  (uVar27,uVar25)))))))) << 0x10),in_stack_0000ffea,
                           CONCAT22(in_stack_0000ffee,in_stack_0000ffec));
      return (int16 *)LVar24;
    }
  }
  else {
    uVar15 = FUN_1040_1d52(0xffff0002,1);
    if (uVar15 != 0) {
      in_BX = (int16 *)FUN_1018_50b2(0x50,(HWND16)s_Robo_Miner_10a8_2024);
      if (in_BX != (int16 *)0x6) {
        return in_BX;
      }
      goto switchD_1008_23d7_caseD_6a;
    }
    HVar14 = LOADCURSOR(0x7f02,(LPCSTR)0x0);
    HVar14 = SETCURSOR(HVar14);
    FUN_1020_5b78((char *)&DAT_10a8_85dc,puVar13);
    FUN_1020_5cd2((uint16 *)puVar13);
    FUN_1008_4db4();
    FUN_1050_0000();
    FUN_1040_190c();
    _WSPRINTF((int16 *)&stack0xfff2,(LPSTR)CONCAT22(0x30f,unaff_SS),
              (LPCSTR)CONCAT22(puVar13 + 1,0x10a8),unaff_SI);
    iVar17 = FUN_1040_02ec((VA_LIST16)&DAT_10a8_85dc,&stack0xfff2);
    if (iVar17 != 0) {
      PTR_DAT_10a8_0001_10a8_00c0 = puVar13;
      window_op_1008_0ede();
      SENDMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffe8,
                                      CONCAT212(in_stack_0000ffe6,
                                                CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(
                                                  PTR_DAT_10a8_0000_10a8_58b4,0x1110fa10000))))),
                  in_stack_0000ffea,CONCAT22(in_stack_0000ffee,in_stack_0000ffec));
      piVar8 = (int16 *)SETCURSOR(HVar14);
      if ((_DAT_10a8_0a46 & 0x4000) == 0) {
        return piVar8;
      }
      _DAT_10a8_8318 = _DAT_10a8_8318 & 0xfdf7;
      piVar8 = (int16 *)FUN_1090_88fa();
      return piVar8;
    }
    SETCURSOR(HVar14);
  }
  uVar27 = 0x17;
  uVar28 = 0;
LAB_1008_2669:
  piVar8 = (int16 *)FUN_1018_50b2(CONCAT11(uVar28,uVar27),0x10);
  return piVar8;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

void __cdecl16far FUN_1008_2db8(HMENU16 param_1,undefined1 param_2 [10])

{
  undefined2 uVar1;
  int16 *__return_storage_ptr__;
  int16 *piVar2;
  HMENU16 HVar3;
  undefined2 unaff_BP;
  HMENU16 unaff_SI;
  int iVar4;
  undefined2 unaff_DI;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000010;
  undefined2 in_stack_0000fffc;

  if (param_1 == 0) {
    param_1 = GETMENU((HWND16)PTR_DAT_10a8_0000_10a8_58b4);
  }
  if ((DAT_10a8_85dc == '\0') || (((byte)PTR_DAT_10a8_0000_10a8_0040 & 4) != 0)) {
    HVar3 = 3;
  }
  else {
    HVar3 = 0;
  }
  ENABLEMENUITEM(HVar3,(uint16)CONCAT412(in_stack_00000000,
                                         CONCAT210(unaff_BP,CONCAT28(in_stack_0000fffc,
                                                                     CONCAT26(unaff_DI,CONCAT24(
                                                  unaff_SI,CONCAT22(param_1,0x6a)))))),
                 (uint16)CONCAT412(in_stack_00000010,CONCAT102(param_2,param_1)));
  ENABLEMENUITEM(-(uint)(DAT_10a8_85dc == '\0') & 3,
                 (uint16)CONCAT412(in_stack_00000000,
                                   CONCAT210(unaff_BP,CONCAT28(in_stack_0000fffc,
                                                               CONCAT26(unaff_DI,CONCAT24(unaff_SI,
                                                  CONCAT22(param_1,0x69)))))),
                 (uint16)CONCAT412(in_stack_00000010,CONCAT102(param_2,param_1)));
  if ((DAT_10a8_85dc == '\0') || (((byte)PTR_DAT_10a8_0000_10a8_0040 & 4) != 0)) {
    HVar3 = 3;
  }
  else {
    HVar3 = 0;
  }
  ENABLEMENUITEM(HVar3,(uint16)CONCAT412(in_stack_00000000,
                                         CONCAT210(unaff_BP,CONCAT28(in_stack_0000fffc,
                                                                     CONCAT26(unaff_DI,CONCAT24(
                                                  unaff_SI,CONCAT22(param_1,0x10e)))))),
                 (uint16)CONCAT412(in_stack_00000010,CONCAT102(param_2,param_1)));
  if ((DAT_10a8_85dc == '\0') || (((byte)PTR_DAT_10a8_0000_10a8_0040 & 4) != 0)) {
    HVar3 = 3;
  }
  else {
    HVar3 = 0;
  }
  ENABLEMENUITEM(HVar3,(uint16)CONCAT412(in_stack_00000000,
                                         CONCAT210(unaff_BP,CONCAT28(in_stack_0000fffc,
                                                                     CONCAT26(unaff_DI,CONCAT24(
                                                  unaff_SI,CONCAT22(param_1,0x7de)))))),
                 (uint16)CONCAT412(in_stack_00000010,CONCAT102(param_2,param_1)));
  if ((DAT_10a8_85dc == '\0') || (((byte)PTR_DAT_10a8_0000_10a8_0040 & 4) != 0)) {
    HVar3 = 3;
  }
  else {
    HVar3 = 0;
  }
  ENABLEMENUITEM(HVar3,(uint16)CONCAT412(in_stack_00000000,
                                         CONCAT210(unaff_BP,CONCAT28(in_stack_0000fffc,
                                                                     CONCAT26(unaff_DI,CONCAT24(
                                                  unaff_SI,CONCAT22(param_1,0xedb)))))),
                 (uint16)CONCAT412(in_stack_00000010,CONCAT102(param_2,param_1)));
  if (PTR_DAT_10a8_0000_10a8_00c4 == (undefined *)0x0) {
    HVar3 = GETMENU((HWND16)PTR_DAT_10a8_0000_10a8_58b4);
    ENABLEMENUITEM(0x403,(uint16)CONCAT412(in_stack_00000000,
                                           CONCAT210(unaff_BP,CONCAT28(in_stack_0000fffc,
                                                                       CONCAT26(unaff_DI,CONCAT24(
                                                  unaff_SI,CONCAT22(HVar3,1)))))),
                   (uint16)CONCAT412(in_stack_00000010,CONCAT102(param_2,param_1)));
  }
  else {
    HVar3 = GETMENU((HWND16)PTR_DAT_10a8_0000_10a8_58b4);
    ENABLEMENUITEM(0x400,(uint16)CONCAT412(in_stack_00000000,
                                           CONCAT210(unaff_BP,CONCAT28(in_stack_0000fffc,
                                                                       CONCAT26(unaff_DI,CONCAT24(
                                                  unaff_SI,CONCAT22(HVar3,1)))))),
                   (uint16)CONCAT412(in_stack_00000010,CONCAT102(param_2,param_1)));
    uVar1 = FUN_1008_5196(PTR_DAT_10a8_0000_10a8_58b4,1);
    __return_storage_ptr__ =
         (int16 *)GETSUBMENU(1,(int16)CONCAT214(param_1,CONCAT410(in_stack_00000000,
                                                                  CONCAT28(unaff_BP,CONCAT26(
                                                  in_stack_0000fffc,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,uVar1)))))));
    CHECKMENUITEM(0x408,(uint16)CONCAT412(in_stack_00000000,
                                          CONCAT210(unaff_BP,CONCAT28(in_stack_0000fffc,
                                                                      CONCAT26(unaff_DI,CONCAT24(
                                                  unaff_SI,CONCAT22(__return_storage_ptr__,
                                                                    PTR_DAT_10a8_0000_10a8_08b2 + 3)
                                                  ))))),
                  (uint16)CONCAT412(in_stack_00000010,CONCAT102(param_2,param_1)));
    iVar4 = 0;
    piVar2 = GETMENUITEMCOUNT(__return_storage_ptr__,unaff_SI);
    if (0 < (int)piVar2) {
      do {
        ENABLEMENUITEM(0x400,(uint16)CONCAT412(in_stack_00000000,
                                               CONCAT210(unaff_BP,CONCAT28(piVar2,CONCAT26(unaff_DI,
                                                  CONCAT24(unaff_SI,CONCAT22(__return_storage_ptr__,
                                                                             iVar4)))))),
                       (uint16)CONCAT412(in_stack_00000010,CONCAT102(param_2,__return_storage_ptr__)
                                        ));
        iVar4 = iVar4 + 1;
        param_1 = (HMENU16)__return_storage_ptr__;
      } while (iVar4 < (int)piVar2);
    }
    uVar1 = FUN_1008_5196(PTR_DAT_10a8_0000_10a8_58b4,1);
    HVar3 = GETSUBMENU(3,(int16)CONCAT214(param_1,CONCAT410(in_stack_00000000,
                                                            CONCAT28(unaff_BP,CONCAT26(piVar2,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,uVar1)))))));
    CHECKMENUITEM(0x408,(uint16)CONCAT412(in_stack_00000000,
                                          CONCAT210(unaff_BP,CONCAT28(piVar2,CONCAT26(unaff_DI,
                                                  CONCAT24(unaff_SI,CONCAT22(HVar3,
                                                  PTR_DAT_10a8_0000_10a8_573a)))))),
                  (uint16)CONCAT412(in_stack_00000010,CONCAT102(param_2,param_1)));
  }
  DRAWMENUBAR((HWND16)PTR_DAT_10a8_0000_10a8_58b4);
  return;
}



undefined * __stdcall16far
SIMPLENEWGAMEDLG(HWND16 param_1,int param_2,int param_3,int param_4,undefined *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *hdest;
  HDC16 HVar3;
  int iVar4;
  int16 *piVar5;
  HWND16 HVar6;
  HWND16 HVar7;
  uint16 *puVar8;
  int iVar9;
  word unaff_BP;
  undefined2 unaff_SI;
  undefined4 *puVar10;
  uint16 *puVar11;
  HRGN16 unaff_DI;
  undefined4 *puVar12;
  PAINTSTRUCT16 *unaff_SS;
  COLORREF CVar13;
  LRESULT LVar14;
  undefined2 uVar15;
  int iVar16;
  undefined2 uVar17;
  undefined *puVar18;
  undefined *hrsc1;
  HRGN16 in_stack_0000ffcc;
  undefined2 in_stack_0000ffce;
  WPARAM16 in_stack_0000ffd0;
  undefined2 in_stack_0000ffd2;
  undefined2 in_stack_0000ffd4;
  undefined2 in_stack_0000ffd6;
  undefined2 in_stack_0000ffd8;
  word in_stack_0000ffda;
  undefined2 in_stack_0000ffdc;
  undefined2 in_stack_0000ffde;
  undefined2 in_stack_0000ffe0;
  undefined4 in_stack_0000ffe2;
  undefined8 in_stack_0000ffe6;
  undefined2 in_stack_0000ffee;
  undefined2 in_stack_0000fff0;
  int in_stack_0000fff2;
  int in_stack_0000fff4;
  int in_stack_0000fff6;
  undefined2 uVar19;

  if (param_4 == 0xf) {
    hdest = (undefined *)
            BEGINPAINT((HWND16)&stack0xffcc,(PAINTSTRUCT16 *)CONCAT22(param_5,unaff_SS));
    HVar7 = GETDLGITEM(200,(int16)CONCAT214(in_stack_0000ffd6,
                                            CONCAT212(in_stack_0000ffd4,
                                                      CONCAT210(in_stack_0000ffd2,
                                                                CONCAT28(in_stack_0000ffd0,
                                                                         CONCAT26(in_stack_0000ffce,
                                                                                  CONCAT24(
                                                  in_stack_0000ffcc,CONCAT22(unaff_DI,param_5)))))))
                      );
    GETWINDOWRECT((HWND16)&stack0xfff4,(RECT16 *)CONCAT22(HVar7,unaff_SS));
    SCREENTOCLIENT((HWND16)&stack0xfff4,(POINT16 *)CONCAT22(param_5,unaff_SS));
    HVar7 = GETDLGITEM(0xcb,(int16)CONCAT214(in_stack_0000ffd6,
                                             CONCAT212(in_stack_0000ffd4,
                                                       CONCAT210(in_stack_0000ffd2,
                                                                 CONCAT28(in_stack_0000ffd0,
                                                                          CONCAT26(in_stack_0000ffce
                                                                                   ,CONCAT24(
                                                  in_stack_0000ffcc,CONCAT22(unaff_DI,param_5)))))))
                      );
    GETWINDOWRECT((HWND16)&stack0xffec,(RECT16 *)CONCAT22(HVar7,unaff_SS));
    SCREENTOCLIENT((HWND16)&stack0xfff0,(POINT16 *)CONCAT22(param_5,unaff_SS));
    FUN_1018_5948((int *)&stack0xfff4,(int)PTR_DAT_10a8_0000_10a8_5794,
                  (int)PTR_DAT_10a8_0000_10a8_5794 >> 1);
    FUN_1018_5bba(hdest,(undefined4 *)&stack0xfff4,-1,unaff_DI,in_stack_0000ffcc,in_stack_0000ffce,
                  in_stack_0000ffd0,in_stack_0000ffd2,in_stack_0000ffd4,in_stack_0000ffd6,
                  in_stack_0000ffd8,in_stack_0000ffda,in_stack_0000ffdc,in_stack_0000ffde,
                  in_stack_0000ffe0);
    SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c6,(HRGN16)hdest,unaff_DI,in_stack_0000ffcc,
                 (int16)CONCAT214(in_stack_0000ffdc,
                                  CONCAT212(in_stack_0000ffda,
                                            CONCAT210(in_stack_0000ffd8,
                                                      CONCAT28(in_stack_0000ffd6,
                                                               CONCAT26(in_stack_0000ffd4,
                                                                        CONCAT24(in_stack_0000ffd2,
                                                                                 CONCAT22(
                                                  in_stack_0000ffd0,in_stack_0000ffce))))))));
    uVar17 = 0xf;
    hrsc1 = hdest;
    CVar13 = GETSYSCOLOR((int16)CONCAT214(in_stack_0000ffd4,
                                          CONCAT212(in_stack_0000ffd2,
                                                    CONCAT210(in_stack_0000ffd0,
                                                              CONCAT28(in_stack_0000ffce,
                                                                       CONCAT26(in_stack_0000ffcc,
                                                                                CONCAT24(unaff_DI,
                                                  CONCAT22(hdest,0xf))))))));
    SETBKCOLOR((HDC16)CVar13.value,(COLORREF)CONCAT22(uVar17,(int)(CVar13.value >> 0x10)));
    HVar3 = FUN_1018_50de(0x120,(char *)&DAT_10a8_86de);
    TEXTOUT(HVar3,(int16)CONCAT214(in_stack_0000ffcc,
                                   CONCAT212(unaff_DI,CONCAT210(hrsc1,CONCAT28(hdest,CONCAT26(
                                                  in_stack_0000fff4 + 8,
                                                  CONCAT24(-(((int)PTR_DAT_10a8_0000_10a8_5794 >> 1)
                                                            - in_stack_0000fff6),0x10a886de)))))),
            (int16)CONCAT214(in_stack_0000ffdc,
                             CONCAT212(in_stack_0000ffda,
                                       CONCAT210(in_stack_0000ffd8,
                                                 CONCAT28(in_stack_0000ffd6,
                                                          CONCAT26(in_stack_0000ffd4,
                                                                   CONCAT24(in_stack_0000ffd2,
                                                                            CONCAT22(
                                                  in_stack_0000ffd0,in_stack_0000ffce))))))),
            (LPCSTR)CONCAT22(in_stack_0000ffe0,in_stack_0000ffde),
            (int16)CONCAT214(in_stack_0000fff0,
                             CONCAT212(in_stack_0000ffee,
                                       CONCAT84(in_stack_0000ffe6,in_stack_0000ffe2))));
    HVar7 = GETDLGITEM(1000,(int16)CONCAT214(in_stack_0000ffd4,
                                             CONCAT212(in_stack_0000ffd2,
                                                       CONCAT210(in_stack_0000ffd0,
                                                                 CONCAT28(in_stack_0000ffce,
                                                                          CONCAT26(in_stack_0000ffcc
                                                                                   ,CONCAT24(
                                                  unaff_DI,CONCAT22(hrsc1,param_5))))))));
    GETWINDOWRECT((HWND16)&stack0xfff4,(RECT16 *)CONCAT22(HVar7,unaff_SS));
    SCREENTOCLIENT((HWND16)&stack0xfff4,(POINT16 *)CONCAT22(param_5,unaff_SS));
    HVar7 = GETDLGITEM(0x3ec,(int16)CONCAT214(in_stack_0000ffd4,
                                              CONCAT212(in_stack_0000ffd2,
                                                        CONCAT210(in_stack_0000ffd0,
                                                                  CONCAT28(in_stack_0000ffce,
                                                                           CONCAT26(
                                                  in_stack_0000ffcc,
                                                  CONCAT24(unaff_DI,CONCAT22(hrsc1,param_5))))))));
    GETWINDOWRECT((HWND16)&stack0xffec,(RECT16 *)CONCAT22(HVar7,unaff_SS));
    SCREENTOCLIENT((HWND16)&stack0xfff0,(POINT16 *)CONCAT22(param_5,unaff_SS));
    uVar17 = in_stack_0000fff0;
    iVar9 = in_stack_0000fff2;
    FUN_1018_5948((int *)&stack0xfff4,(int)PTR_DAT_10a8_0000_10a8_5794,
                  (int)PTR_DAT_10a8_0000_10a8_5794 >> 1);
    FUN_1018_5bba(hdest,(undefined4 *)&stack0xfff4,-1,hrsc1,unaff_DI,in_stack_0000ffcc,
                  in_stack_0000ffce,in_stack_0000ffd0,in_stack_0000ffd2,in_stack_0000ffd4,
                  in_stack_0000ffd6,in_stack_0000ffd8,in_stack_0000ffda,in_stack_0000ffdc,
                  in_stack_0000ffde);
    SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c6,(HRGN16)hdest,(HRGN16)hrsc1,unaff_DI,
                 (int16)CONCAT214(in_stack_0000ffda,
                                  CONCAT212(in_stack_0000ffd8,
                                            CONCAT210(in_stack_0000ffd6,
                                                      CONCAT28(in_stack_0000ffd4,
                                                               CONCAT26(in_stack_0000ffd2,
                                                                        CONCAT24(in_stack_0000ffd0,
                                                                                 CONCAT22(
                                                  in_stack_0000ffce,in_stack_0000ffcc))))))));
    HVar3 = FUN_1018_50de(0x121,(char *)&DAT_10a8_86de);
    TEXTOUT(HVar3,(int16)CONCAT214(in_stack_0000ffcc,
                                   CONCAT212(unaff_DI,CONCAT210(hrsc1,CONCAT28(hdest,CONCAT26(
                                                  in_stack_0000fff4 + 8,
                                                  CONCAT24(-(((int)PTR_DAT_10a8_0000_10a8_5794 >> 1)
                                                            - in_stack_0000fff6),0x10a886de)))))),
            (int16)CONCAT214(in_stack_0000ffdc,
                             CONCAT212(in_stack_0000ffda,
                                       CONCAT210(in_stack_0000ffd8,
                                                 CONCAT28(in_stack_0000ffd6,
                                                          CONCAT26(in_stack_0000ffd4,
                                                                   CONCAT24(in_stack_0000ffd2,
                                                                            CONCAT22(
                                                  in_stack_0000ffd0,in_stack_0000ffce))))))),
            (LPCSTR)CONCAT22(in_stack_0000ffe0,in_stack_0000ffde),
            (int16)CONCAT214(in_stack_0000fff0,
                             CONCAT212(in_stack_0000ffee,
                                       CONCAT84(in_stack_0000ffe6,in_stack_0000ffe2))));
    iVar4 = iVar9 + 8;
    HVar7 = GETDLGITEM(0x414,(int16)CONCAT214(in_stack_0000ffd4,
                                              CONCAT212(in_stack_0000ffd2,
                                                        CONCAT210(in_stack_0000ffd0,
                                                                  CONCAT28(in_stack_0000ffce,
                                                                           CONCAT26(
                                                  in_stack_0000ffcc,
                                                  CONCAT24(unaff_DI,CONCAT22(hrsc1,param_5))))))));
    GETWINDOWRECT((HWND16)&stack0xfff4,(RECT16 *)CONCAT22(HVar7,unaff_SS));
    MAPWINDOWPOINTS(2,(HWND16)&stack0xfff4,(POINT16 *)unaff_SS,
                    (uint16)CONCAT214(in_stack_0000ffd2,
                                      CONCAT212(in_stack_0000ffd0,
                                                CONCAT210(in_stack_0000ffce,
                                                          CONCAT28(in_stack_0000ffcc,
                                                                   CONCAT26(unaff_DI,CONCAT24(hrsc1,
                                                  ZEXT24(param_5))))))));
    FUN_1018_5948((int *)&stack0xfff4,(int)PTR_DAT_10a8_0000_10a8_5794,
                  (int)PTR_DAT_10a8_0000_10a8_5794 >> 1);
    iVar9 = iVar9 + (int)PTR_DAT_10a8_0000_10a8_5794 * 2;
    FUN_1018_5bba(hdest,(undefined4 *)&stack0xfff4,-1,hrsc1,unaff_DI,in_stack_0000ffcc,
                  in_stack_0000ffce,in_stack_0000ffd0,in_stack_0000ffd2,in_stack_0000ffd4,
                  in_stack_0000ffd6,in_stack_0000ffd8,in_stack_0000ffda,in_stack_0000ffdc,
                  in_stack_0000ffde);
    SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_59c6,(HRGN16)hdest,(HRGN16)hrsc1,unaff_DI,
                 (int16)CONCAT214(in_stack_0000ffda,
                                  CONCAT212(in_stack_0000ffd8,
                                            CONCAT210(in_stack_0000ffd6,
                                                      CONCAT28(in_stack_0000ffd4,
                                                               CONCAT26(in_stack_0000ffd2,
                                                                        CONCAT24(in_stack_0000ffd0,
                                                                                 CONCAT22(
                                                  in_stack_0000ffce,in_stack_0000ffcc))))))));
    HVar3 = FUN_1018_50de(0x122,(char *)&DAT_10a8_86de);
    TEXTOUT(HVar3,(int16)CONCAT214(in_stack_0000ffcc,
                                   CONCAT212(unaff_DI,CONCAT210(hrsc1,CONCAT28(hdest,CONCAT26(
                                                  in_stack_0000fff4 + 8,
                                                  CONCAT24(-(((int)PTR_DAT_10a8_0000_10a8_5794 >> 1)
                                                            - iVar4),0x10a886de)))))),
            (int16)CONCAT214(in_stack_0000ffdc,
                             CONCAT212(in_stack_0000ffda,
                                       CONCAT210(in_stack_0000ffd8,
                                                 CONCAT28(in_stack_0000ffd6,
                                                          CONCAT26(in_stack_0000ffd4,
                                                                   CONCAT24(in_stack_0000ffd2,
                                                                            CONCAT22(
                                                  in_stack_0000ffd0,in_stack_0000ffce))))))),
            (LPCSTR)CONCAT22(in_stack_0000ffe0,in_stack_0000ffde),
            (int16)CONCAT214(in_stack_0000fff0,
                             CONCAT212(in_stack_0000ffee,
                                       CONCAT84(in_stack_0000ffe6,in_stack_0000ffe2))));
    iVar9 = (int)PTR_DAT_10a8_0000_10a8_5794 * 3 + iVar9;
    uVar19 = 1000;
    FUN_1018_5948((int *)&stack0xfff4,-(int)PTR_DAT_10a8_0000_10a8_5794,0);
    iVar16 = (int)s_From___s_c_c_10a8_10a2 + 6;
    uVar15 = SUB42(&DAT_10a8_86de,0);
    puVar18 = hdest;
    iVar4 = FUN_1018_50de(0x126,(char *)&DAT_10a8_86de);
    piVar5 = DRAWTEXT((int16 *)0x810,(HDC16)&stack0xfff4,(LPCSTR)CONCAT22(iVar4,unaff_SS),
                      (int16)CONCAT214(in_stack_0000ffd0,
                                       CONCAT212(in_stack_0000ffce,
                                                 CONCAT210(in_stack_0000ffcc,
                                                           CONCAT28(unaff_DI,CONCAT26(hrsc1,CONCAT24
                                                  (puVar18,CONCAT22(iVar16,uVar15))))))),
                      (RECT16 *)CONCAT22(in_stack_0000ffd4,in_stack_0000ffd2),
                      (uint16)CONCAT412(in_stack_0000ffe2,
                                        CONCAT210(in_stack_0000ffe0,
                                                  CONCAT28(in_stack_0000ffde,
                                                           CONCAT26(in_stack_0000ffdc,
                                                                    CONCAT24(in_stack_0000ffda,
                                                                             CONCAT22(
                                                  in_stack_0000ffd8,in_stack_0000ffd6)))))));
    HVar7 = GETDLGITEM(0xd3,(int16)CONCAT214(in_stack_0000ffd4,
                                             CONCAT212(in_stack_0000ffd2,
                                                       CONCAT210(in_stack_0000ffd0,
                                                                 CONCAT28(in_stack_0000ffce,
                                                                          CONCAT26(in_stack_0000ffcc
                                                                                   ,CONCAT24(
                                                  unaff_DI,CONCAT22(hrsc1,param_5))))))));
    SETWINDOWPOS(5,0,(int16)CONCAT214(in_stack_0000ffcc,
                                      CONCAT212(unaff_DI,CONCAT210(hrsc1,CONCAT28(HVar7,(qword)
                                                  CONCAT22(in_stack_0000fff4,
                                                           (int)piVar5 +
                                                           iVar9 + (int)PTR_DAT_10a8_0000_10a8_5794
                                                                   / 2) << 0x10)))),
                 (int16)CONCAT214(in_stack_0000ffdc,
                                  CONCAT212(in_stack_0000ffda,
                                            CONCAT210(in_stack_0000ffd8,
                                                      CONCAT28(in_stack_0000ffd6,
                                                               CONCAT26(in_stack_0000ffd4,
                                                                        CONCAT24(in_stack_0000ffd2,
                                                                                 CONCAT22(
                                                  in_stack_0000ffd0,in_stack_0000ffce))))))),
                 (int16)CONCAT88(in_stack_0000ffe6,
                                 CONCAT44(in_stack_0000ffe2,
                                          CONCAT22(in_stack_0000ffe0,in_stack_0000ffde))),
                 (int16)CONCAT214(piVar5,CONCAT212(uVar19,CONCAT210(uVar17,CONCAT28(iVar9,CONCAT26(
                                                  in_stack_0000fff4,
                                                  CONCAT24(in_stack_0000fff2,
                                                           CONCAT22(in_stack_0000fff0,
                                                                    in_stack_0000ffee))))))),
                 unaff_BP);
    FUN_1018_5948((int *)&stack0xfff4,(int)PTR_DAT_10a8_0000_10a8_5794,
                  (int)PTR_DAT_10a8_0000_10a8_5794 >> 1);
    FUN_1018_5bba(hdest,(undefined4 *)&stack0xfff4,-2,hrsc1,unaff_DI,in_stack_0000ffcc,
                  in_stack_0000ffce,in_stack_0000ffd0,in_stack_0000ffd2,in_stack_0000ffd4,
                  in_stack_0000ffd6,in_stack_0000ffd8,in_stack_0000ffda,in_stack_0000ffdc,
                  in_stack_0000ffde);
    HVar3 = FUN_1018_50de(0x125,(char *)&DAT_10a8_86de);
    TEXTOUT(HVar3,(int16)CONCAT214(in_stack_0000ffcc,
                                   CONCAT212(unaff_DI,CONCAT210(hrsc1,CONCAT28(hdest,CONCAT26(
                                                  in_stack_0000fff4 + 8,
                                                  CONCAT24(-(((int)PTR_DAT_10a8_0000_10a8_5794 >> 1)
                                                            - iVar9),0x10a886de)))))),
            (int16)CONCAT214(in_stack_0000ffdc,
                             CONCAT212(in_stack_0000ffda,
                                       CONCAT210(in_stack_0000ffd8,
                                                 CONCAT28(in_stack_0000ffd6,
                                                          CONCAT26(in_stack_0000ffd4,
                                                                   CONCAT24(in_stack_0000ffd2,
                                                                            CONCAT22(
                                                  in_stack_0000ffd0,in_stack_0000ffce))))))),
            (LPCSTR)CONCAT22(in_stack_0000ffe0,in_stack_0000ffde),
            (int16)CONCAT214(in_stack_0000fff0,
                             CONCAT212(in_stack_0000ffee,
                                       CONCAT84(in_stack_0000ffe6,in_stack_0000ffe2))));
    ENDPAINT((HWND16)&stack0xffcc,unaff_SS);
  }
  else if (param_4 == 0x14) {
    GETCLIENTRECT((HWND16)&stack0xffec,(RECT16 *)CONCAT22(param_5,unaff_SS));
    FILLRECT((int16 *)PTR_DAT_10a8_0000_10a8_0010,(HDC16)&stack0xffec,(RECT16 *)unaff_SS,param_3);
  }
  else {
    if (param_4 == 0x19) {
      HVar7 = 200;
      do {
        HVar6 = GETDLGITEM(HVar7,(int16)CONCAT214(in_stack_0000ffd4,
                                                  CONCAT212(in_stack_0000ffd2,
                                                            CONCAT210(in_stack_0000ffd0,
                                                                      CONCAT28(in_stack_0000ffce,
                                                                               CONCAT26(
                                                  in_stack_0000ffcc,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,param_5)))))))
                          );
        if (HVar6 == param_1) {
          HVar7 = 0xffff;
          break;
        }
        HVar7 = HVar7 + 1;
      } while ((int)HVar7 < 0xcc);
      if (HVar7 != 0xffff) {
        HVar7 = 1000;
        do {
          HVar6 = GETDLGITEM(HVar7,(int16)CONCAT214(in_stack_0000ffd4,
                                                    CONCAT212(in_stack_0000ffd2,
                                                              CONCAT210(in_stack_0000ffd0,
                                                                        CONCAT28(in_stack_0000ffce,
                                                                                 CONCAT26(
                                                  in_stack_0000ffcc,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,param_5)))))))
                            );
          if (HVar6 == param_1) {
            HVar7 = 0xffff;
            break;
          }
          HVar7 = HVar7 + 1;
        } while ((int)HVar7 < 0x3ed);
      }
      if ((HVar7 != 0xffff) && (param_2 != 6)) {
        return (undefined *)0x0;
      }
      uVar17 = 0xf;
      CVar13 = GETSYSCOLOR((int16)CONCAT214(in_stack_0000ffd2,
                                            CONCAT212(in_stack_0000ffd0,
                                                      CONCAT210(in_stack_0000ffce,
                                                                CONCAT28(in_stack_0000ffcc,
                                                                         CONCAT26(unaff_DI,CONCAT24(
                                                  unaff_SI,CONCAT22(param_3,0xf))))))));
      SETBKCOLOR((HDC16)CVar13.value,(COLORREF)CONCAT22(uVar17,(int)(CVar13.value >> 0x10)));
      return PTR_DAT_10a8_0000_10a8_0010;
    }
    if (param_4 == 0x110) {
      CHECKRADIOBUTTON(0xc9,(uint16)CONCAT214(in_stack_0000ffd0,
                                              CONCAT212(in_stack_0000ffce,
                                                        CONCAT210(in_stack_0000ffcc,
                                                                  CONCAT28(unaff_DI,CONCAT26(
                                                  unaff_SI,CONCAT24(param_5,0xc800cb)))))),
                       (uint16)CONCAT214(in_stack_0000ffe0,
                                         CONCAT212(in_stack_0000ffde,
                                                   CONCAT210(in_stack_0000ffdc,
                                                             CONCAT28(in_stack_0000ffda,
                                                                      CONCAT26(in_stack_0000ffd8,
                                                                               CONCAT24(
                                                  in_stack_0000ffd6,
                                                  CONCAT22(in_stack_0000ffd4,in_stack_0000ffd2))))))
                                        ),
                       (uint16)CONCAT214(in_stack_0000fff0,
                                         CONCAT212(in_stack_0000ffee,
                                                   CONCAT84(in_stack_0000ffe6,in_stack_0000ffe2))));
      CHECKRADIOBUTTON(0x3e9,(uint16)CONCAT214(in_stack_0000ffd0,
                                               CONCAT212(in_stack_0000ffce,
                                                         CONCAT210(in_stack_0000ffcc,
                                                                   CONCAT28(unaff_DI,CONCAT26(
                                                  unaff_SI,CONCAT24(param_5,0x3e803ec)))))),
                       (uint16)CONCAT214(in_stack_0000ffe0,
                                         CONCAT212(in_stack_0000ffde,
                                                   CONCAT210(in_stack_0000ffdc,
                                                             CONCAT28(in_stack_0000ffda,
                                                                      CONCAT26(in_stack_0000ffd8,
                                                                               CONCAT24(
                                                  in_stack_0000ffd6,
                                                  CONCAT22(in_stack_0000ffd4,in_stack_0000ffd2))))))
                                        ),
                       (uint16)CONCAT214(in_stack_0000fff0,
                                         CONCAT212(in_stack_0000ffee,
                                                   CONCAT84(in_stack_0000ffe6,in_stack_0000ffe2))));
      HVar7 = 0x3ea;
      do {
        HVar6 = GETDLGITEM(HVar7,(int16)CONCAT214(in_stack_0000ffd4,
                                                  CONCAT212(in_stack_0000ffd2,
                                                            CONCAT210(in_stack_0000ffd0,
                                                                      CONCAT28(in_stack_0000ffce,
                                                                               CONCAT26(
                                                  in_stack_0000ffcc,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,param_5)))))))
                          );
        ENABLEWINDOW(0,HVar6);
        HVar7 = HVar7 + 1;
      } while ((int)HVar7 < 0x3ed);
      HVar6 = GETDLGITEM(0x414,(int16)CONCAT214(in_stack_0000ffd4,
                                                CONCAT212(in_stack_0000ffd2,
                                                          CONCAT210(in_stack_0000ffd0,
                                                                    CONCAT28(in_stack_0000ffce,
                                                                             CONCAT26(
                                                  in_stack_0000ffcc,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,param_5)))))))
                        );
      SENDMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffce,
                                      CONCAT212(in_stack_0000ffcc,
                                                CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(HVar6,
                                                  0x40b00000000))))),in_stack_0000ffd0,
                  CONCAT22(in_stack_0000ffd4,in_stack_0000ffd2));
      HVar7 = (HWND16)s_Humanoid_10a8_44c4;
      do {
        SENDMESSAGE(HVar7,(uint16)CONCAT214(in_stack_0000ffce,
                                            CONCAT212(in_stack_0000ffcc,
                                                      CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(
                                                  HVar6,0x403000010a8))))),in_stack_0000ffd0,
                    CONCAT22(in_stack_0000ffd4,in_stack_0000ffd2));
        HVar7 = HVar7 + 0x76;
      } while (HVar7 < (uint)s_Random_10a8_4788);
      SENDMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffce,
                                      CONCAT212(in_stack_0000ffcc,
                                                CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(HVar6,
                                                  0x40e00000000))))),in_stack_0000ffd0,
                  CONCAT22(in_stack_0000ffd4,in_stack_0000ffd2));
      FUN_1018_5a04(param_5,(int *)0x336,1,unaff_SI,
                    (int16)CONCAT214(in_stack_0000ffd8,
                                     CONCAT212(in_stack_0000ffd6,
                                               CONCAT210(in_stack_0000ffd4,
                                                         CONCAT28(in_stack_0000ffd2,
                                                                  CONCAT26(in_stack_0000ffd0,
                                                                           CONCAT24(
                                                  in_stack_0000ffce,
                                                  CONCAT22(in_stack_0000ffcc,unaff_DI))))))),
                    in_stack_0000ffda);
    }
    else {
      if (param_4 != 0x111) {
        return (undefined *)0x0;
      }
      if (((param_3 == 0x430) || (param_3 == 2)) || (param_3 == 0xd3)) {
        puVar11 = (uint16 *)&PTR_DAT_10a8_0000_10a8_00c8;
        do {
          puVar8 = ISDLGBUTTONCHECKED(puVar11,(HWND16)param_5,
                                      (uint16)CONCAT214(in_stack_0000ffd6,
                                                        CONCAT212(in_stack_0000ffd4,
                                                                  CONCAT210(in_stack_0000ffd2,
                                                                            CONCAT28(
                                                  in_stack_0000ffd0,
                                                  CONCAT26(in_stack_0000ffce,
                                                           CONCAT24(in_stack_0000ffcc,
                                                                    CONCAT22(unaff_DI,unaff_SI))))))
                                                  ));
          if (puVar8 != (uint16 *)0x0) break;
          puVar11 = (uint16 *)((int)puVar11 + 1);
        } while ((int)puVar11 < 0xcc);
        PTR_DAT_10a8_0001_10a8_0036 = (undefined *)((int)puVar11 + -200);
        puVar11 = (uint16 *)((int)s__s___s_computer_player__10a8_03d3 + 0x15);
        do {
          puVar8 = ISDLGBUTTONCHECKED(puVar11,(HWND16)param_5,
                                      (uint16)CONCAT214(in_stack_0000ffd6,
                                                        CONCAT212(in_stack_0000ffd4,
                                                                  CONCAT210(in_stack_0000ffd2,
                                                                            CONCAT28(
                                                  in_stack_0000ffd0,
                                                  CONCAT26(in_stack_0000ffce,
                                                           CONCAT24(in_stack_0000ffcc,
                                                                    CONCAT22(unaff_DI,unaff_SI))))))
                                                  ));
          if (puVar8 != (uint16 *)0x0) break;
          puVar11 = (uint16 *)((int)puVar11 + 1);
        } while ((int)puVar11 < 0x3ed);
        PTR_DAT_10a8_0002_10a8_0034 = (undefined *)((int)puVar11 + -1000);
        HVar7 = GETDLGITEM(0x414,(int16)CONCAT214(in_stack_0000ffd4,
                                                  CONCAT212(in_stack_0000ffd2,
                                                            CONCAT210(in_stack_0000ffd0,
                                                                      CONCAT28(in_stack_0000ffce,
                                                                               CONCAT26(
                                                  in_stack_0000ffcc,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,param_5)))))))
                          );
        LVar14 = SENDMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffce,
                                                 CONCAT212(in_stack_0000ffcc,
                                                           CONCAT210(unaff_DI,CONCAT28(unaff_SI,
                                                  CONCAT26(HVar7,0x40700000000))))),
                             in_stack_0000ffd0,CONCAT22(in_stack_0000ffd4,in_stack_0000ffd2));
        PTR_DAT_10a8_0000_10a8_0042 = (undefined *)LVar14;
        FUN_1018_5a04(param_5,(int *)0x336,0,unaff_SI,
                      (int16)CONCAT214(in_stack_0000ffd8,
                                       CONCAT212(in_stack_0000ffd6,
                                                 CONCAT210(in_stack_0000ffd4,
                                                           CONCAT28(in_stack_0000ffd2,
                                                                    CONCAT26(in_stack_0000ffd0,
                                                                             CONCAT24(
                                                  in_stack_0000ffce,
                                                  CONCAT22(in_stack_0000ffcc,unaff_DI))))))),
                      in_stack_0000ffda);
      }
      else {
        if (param_3 != 0xd4) {
          if (param_3 == 0xd2) {
            HVar7 = GETDLGITEM(0x414,(int16)CONCAT214(in_stack_0000ffd4,
                                                      CONCAT212(in_stack_0000ffd2,
                                                                CONCAT210(in_stack_0000ffd0,
                                                                          CONCAT28(in_stack_0000ffce
                                                                                   ,CONCAT26(
                                                  in_stack_0000ffcc,
                                                  CONCAT24(unaff_DI,CONCAT22(unaff_SI,param_5)))))))
                              );
            LVar14 = SENDMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffce,
                                                     CONCAT212(in_stack_0000ffcc,
                                                               CONCAT210(unaff_DI,CONCAT28(unaff_SI,
                                                  CONCAT26(HVar7,0x40700000000))))),
                                 in_stack_0000ffd0,CONCAT22(in_stack_0000ffd4,in_stack_0000ffd2));
            PTR_DAT_10a8_0000_10a8_0042 = (undefined *)LVar14;
            puVar10 = (undefined4 *)PTR_DAT_10a8_0000_10a8_59a6;
            if (PTR_DAT_10a8_0000_10a8_0042 < (undefined *)0x7) {
              puVar10 = (undefined4 *)
                        ((int)&DAT_10a8_446e + (int)PTR_DAT_10a8_0000_10a8_0042 * 0x76);
            }
            puVar12 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_8166;
            for (iVar9 = 0x1d; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar2 = puVar12;
              puVar12 = puVar12 + 1;
              puVar1 = puVar10;
              puVar10 = puVar10 + 1;
              *puVar2 = *puVar1;
            }
            *(undefined2 *)puVar12 = *(undefined2 *)puVar10;
            iVar9 = FUN_1078_0000(param_5,(undefined *)0x0,1);
            if (iVar9 != 0) {
              LVar14 = SENDMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffce,
                                                       CONCAT212(in_stack_0000ffcc,
                                                                 CONCAT210(unaff_DI,CONCAT28(
                                                  unaff_SI,CONCAT26(HVar7,0x40600000000))))),
                                   in_stack_0000ffd0,CONCAT22(in_stack_0000ffd4,in_stack_0000ffd2));
              if ((-1 < LVar14) &&
                 (((int)((ulong)LVar14 >> 0x10) != 0 && -1 < LVar14 || (7 < (uint)LVar14)))) {
                SENDMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffce,
                                                CONCAT212(in_stack_0000ffcc,
                                                          CONCAT210(unaff_DI,CONCAT28(unaff_SI,
                                                  CONCAT26(HVar7,0x40400070000))))),
                            in_stack_0000ffd0,CONCAT22(in_stack_0000ffd4,in_stack_0000ffd2));
              }
              SENDMESSAGE((HWND16)&PTR_DAT_10a8_0000_10a8_81bc,
                          (uint16)CONCAT214(in_stack_0000ffce,
                                            CONCAT212(in_stack_0000ffcc,
                                                      CONCAT210(unaff_DI,CONCAT28(unaff_SI,CONCAT26(
                                                  HVar7,0x403000010a8))))),in_stack_0000ffd0,
                          CONCAT22(in_stack_0000ffd4,in_stack_0000ffd2));
              SENDMESSAGE(0,(uint16)CONCAT214(in_stack_0000ffce,
                                              CONCAT212(in_stack_0000ffcc,
                                                        CONCAT210(unaff_DI,CONCAT28(unaff_SI,
                                                  CONCAT26(HVar7,0x40e00070000))))),
                          in_stack_0000ffd0,CONCAT22(in_stack_0000ffd4,in_stack_0000ffd2));
              puVar10 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_8166;
              puVar12 = (undefined4 *)PTR_DAT_10a8_0000_10a8_59a6;
              for (iVar9 = 0x1d; iVar9 != 0; iVar9 = iVar9 + -1) {
                puVar2 = puVar12;
                puVar12 = puVar12 + 1;
                puVar1 = puVar10;
                puVar10 = puVar10 + 1;
                *puVar2 = *puVar1;
              }
              *(undefined2 *)puVar12 = *(undefined2 *)puVar10;
            }
            SETFOCUS((HWND16)param_5);
            return (undefined *)0x0;
          }
          if (param_3 != 0x76) {
            return (undefined *)0x0;
          }
          WINHELP(0x66,(LPCSTR)0x10000,
                  (uint16)CONCAT214(in_stack_0000ffd0,
                                    CONCAT212(in_stack_0000ffce,
                                              CONCAT210(in_stack_0000ffcc,
                                                        CONCAT28(unaff_DI,CONCAT26(unaff_SI,CONCAT24
                                                  (param_5,CONCAT22(0x10a8,
                                                  PTR_s_stars__hlp_10a8_00b2_10a8_00be))))))));
          goto LAB_1008_3234;
        }
        FUN_1018_5a04(param_5,(int *)0x336,0,unaff_SI,
                      (int16)CONCAT214(in_stack_0000ffd8,
                                       CONCAT212(in_stack_0000ffd6,
                                                 CONCAT210(in_stack_0000ffd4,
                                                           CONCAT28(in_stack_0000ffd2,
                                                                    CONCAT26(in_stack_0000ffd0,
                                                                             CONCAT24(
                                                  in_stack_0000ffce,
                                                  CONCAT22(in_stack_0000ffcc,unaff_DI))))))),
                      in_stack_0000ffda);
      }
      ENDDIALOG(param_3,(int16)CONCAT214(in_stack_0000ffd4,
                                         CONCAT212(in_stack_0000ffd2,
                                                   CONCAT210(in_stack_0000ffd0,
                                                             CONCAT28(in_stack_0000ffce,
                                                                      CONCAT26(in_stack_0000ffcc,
                                                                               CONCAT24(unaff_DI,
                                                  CONCAT22(unaff_SI,param_5))))))));
    }
  }
LAB_1008_3234:
  return (undefined *)&DAT_10a8_0001;
}
