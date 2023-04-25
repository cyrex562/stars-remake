
uint __cdecl16far FUN_1008_911c(undefined2 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_SS;
  undefined4 local_4a;
  byte local_45;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  undefined *local_4;

  local_4 = PTR_DAT_10a8_0000_10a8_7b58;
  if (PTR_DAT_10a8_0000_10a8_7b58 == (undefined *)&PTR_LOOP_10a8_0004) {
    if (((byte)PTR_DAT_10a8_0000_10a8_7b5a & 1) == 0) {
      local_4 = (undefined *)(-(uint)(((byte)PTR_DAT_10a8_0000_10a8_7b5a & 2) != 0) & 2);
    }
    else {
      local_4 = (undefined *)&DAT_10a8_0001;
    }
  }
  GETCLIENTRECT((HWND16)&local_e,(RECT16 *)CONCAT22(param_1,unaff_SS));
  local_c = local_c + (int)PTR_DAT_10a8_0000_10a8_5794 * 2;
  if ((((param_3 < local_c + -5) && (4 < param_3)) && (param_2 < local_a + -4)) &&
     ((local_a - local_c < param_2 && (iVar1 = FUN_1008_9af2(), iVar1 != 0)))) {
    return 9;
  }
  if (local_4 == (undefined *)&DAT_10a8_0002) {
    if ((((local_e + 9 <= param_2) && (param_2 < local_e + 0x49)) &&
        ((local_c + 9 <= param_3 && (param_3 < local_c + 0x49)))) ||
       (((local_e + 0x5c <= param_2 && (local_c + 4 <= param_3)) &&
        (param_3 < (int)(PTR_DAT_10a8_0000_10a8_5794 + local_c + 7))))) {
      return 0xb;
    }
    if ((((local_e + 0x19 <= param_2) && (param_2 < local_e + 0x39)) && (local_c + 0x47 <= param_3))
       && (param_3 < local_c + 0x67)) {
      return 10;
    }
  }
  else if ((PTR_DAT_10a8_0000_10a8_7b5c != (undefined *)0xffff) &&
          (iVar1 = FUN_1010_02b0((int)PTR_DAT_10a8_0000_10a8_7b5c,&local_4a), iVar1 != 0)) {
    local_c = local_c + -4;
    uVar2 = (((local_8 + (int)PTR_DAT_10a8_0000_10a8_5794 * -4) - local_c) + -2) / 7 + 1U & 0xfffe;
    iVar1 = (int)PTR_DAT_10a8_0000_10a8_5794 * 2 + local_c;
    if (iVar1 <= param_3) {
      if (param_3 < (int)(uVar2 * 3 + iVar1)) {
        return (param_3 - iVar1) / (int)uVar2 + 6;
      }
      iVar1 = iVar1 + ((int)PTR_DAT_10a8_0000_10a8_5794 >> 1) + uVar2 * 3 + 1;
      if ((int)(uVar2 * 4 + iVar1) <= param_3) {
        return 5;
      }
      return (param_3 - iVar1) / (int)uVar2 + 1;
    }
    if (local_c < param_3) {
      if (local_a + -0x18 <= param_2) {
        return -(uint)((local_45 & 2) != 0) & 0xd;
      }
      if ((((local_4a._2_2_ != PTR_DAT_10a8_0001_10a8_00c0) && ((local_a * 3) / 5 < param_2)) &&
          (iVar1 - (int)PTR_DAT_10a8_0000_10a8_5794 <= param_3)) &&
         (local_4a._2_2_ != (undefined *)0xffff)) {
        return 10;
      }
      return 0xc;
    }
  }
  return 0;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16far FUN_1008_932c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int iVar11;
  uint in_DX;
  uint *puVar12;
  undefined2 unaff_SI;
  uint *puVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined2 unaff_DI;
  undefined4 *puVar16;
  HMENU16 HVar17;
  uint uVar18;
  undefined2 unaff_SS;
  bool bVar19;
  VA_LIST16 valist;
  undefined4 uVar20;
  int16 local_78 [2];
  undefined4 local_50;
  byte local_4c;
  byte local_4a;
  char acStack_44 [20];
  undefined4 local_30 [2];
  undefined local_28 [14];
  undefined4 local_1a;
  undefined *puStack_16;
  undefined local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  undefined *local_6;
  int16 *local_4;

  uVar20 = CONCAT22(unaff_DI,unaff_SI);
  iVar11 = (int)((ulong)param_1 >> 0x10);
  uVar7 = FUN_1008_911c(PTR_DAT_10a8_0000_10a8_00c8,(int)param_1,iVar11);
  if ((param_2 == 0x204) && (uVar7 != 9)) {
    return;
  }
  if (0xc < uVar7 - 1) {
    return;
  }
  puVar13 = (uint *)_PTR_DAT_10a8_0000_10a8_006e;
  uVar18 = (uint)((ulong)_PTR_DAT_10a8_0000_10a8_006e >> 0x10);
  switch(uVar7) {
  default:
    FUN_1010_02b0((int)PTR_DAT_10a8_0000_10a8_7b5c,(undefined4 *)((int)&local_50 + 2));
    PTR_DAT_10a8_0000_10a8_1144 = (undefined *)&DAT_10a8_0001;
    _PTR_DAT_10a8_0000_10a8_1146 = (ulong)(int)(uVar7 - 1);
    puVar16 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_114a;
    for (iVar11 = 4; iVar11 != 0; iVar11 = iVar11 + -1) {
      puVar1 = puVar16;
      puVar16 = puVar16 + 1;
      *puVar1 = 0xffffffff;
    }
    if (2 < local_4a) {
      PTR_DAT_10a8_0000_10a8_114a = *(undefined **)(&local_4a + uVar7 * 2);
      PTR_DAT_10a8_0000_10a8_114c = (undefined *)0x0;
      PTR_DAT_10a8_0000_10a8_1152 = (undefined *)(int)acStack_44[uVar7 + 3];
      PTR_DAT_10a8_0000_10a8_1154 = (undefined *)((int)PTR_DAT_10a8_0000_10a8_1152 >> 0xf);
      if (local_4a == 7) {
        _PTR_DAT_10a8_0000_10a8_114e = local_30[uVar7];
        FUN_1008_9d54(CONCAT22(unaff_SS,(undefined2 *)((int)&local_50 + 2)),
                      (undefined4 *)(local_14 + 2),0xffff);
        _PTR_DAT_10a8_0000_10a8_1156 = *(undefined4 *)(&puStack_16 + uVar7 * 2);
      }
    }
    break;
  case 5:
    local_8 = 0xffff;
    local_1a._2_2_ = 500;
    puStack_16 = (undefined *)0x3e8;
    local_14 = (undefined  [4])0x138809c4;
    local_10 = 0x27101d4c;
    local_c = 0x75304e20;
    iVar14 = 0;
    HVar17 = 0;
    local_4 = local_78;
    do {
      _WSPRINTF(local_4,(LPSTR)CONCAT22(0x667,unaff_SS),
                (LPCSTR)CONCAT22(*(undefined2 *)((int)&local_1a + iVar14 + 2),0x10a8),
                (VA_LIST16)uVar20);
      *(int16 **)(local_28 + iVar14) = local_4;
      if (*(int *)((int)&local_1a + iVar14 + 2) == DAT_10a8_064e) {
        local_8 = HVar17;
      }
      iVar14 = iVar14 + 2;
      HVar17 = HVar17 + 1;
      local_4 = (int16 *)((int)local_4 + 10);
    } while (local_4 < local_28);
    local_6 = FUN_1058_0cc6((int)PTR_DAT_10a8_0000_10a8_00c8,(int)param_1,iVar11,8,0,(int)local_28,
                            local_8);
    if (local_6 == (undefined *)0xffff) {
      return;
    }
    iVar11 = *(int *)((int)&local_1a + (int)local_6 * 2 + 2);
    if (iVar11 == DAT_10a8_064e) {
      return;
    }
    DAT_10a8_064e = iVar11;
    INVALIDATERECT(1,(RECT16 *)0x0,0);
    return;
  case 6:
  case 7:
  case 8:
    FUN_1010_02b0((int)PTR_DAT_10a8_0000_10a8_7b5c,&local_50);
    PTR_DAT_10a8_0000_10a8_1144 = (undefined *)((int)&PTR_LOOP_10a8_0004 + 1);
    _PTR_DAT_10a8_0000_10a8_1146 = CONCAT22(uVar7 - 6,(undefined2)local_50);
    if (local_4c < 3) {
      PTR_DAT_10a8_0000_10a8_114a = (undefined *)0xffff;
LAB_1008_9546:
      PTR_DAT_10a8_0000_10a8_114c = (undefined *)0xffff;
      puVar3 = (undefined *)0xffff;
    }
    else {
      PTR_DAT_10a8_0000_10a8_114a = (undefined *)(int)acStack_44[uVar7];
      iVar11 = FUN_1020_3abc(CONCAT22(unaff_SS,&local_50),(int *)((int)&local_10 + 2),
                             (int *)&local_8,(undefined2 *)local_14);
      if (iVar11 == 0) goto LAB_1008_9546;
      PTR_DAT_10a8_0000_10a8_114c = (undefined *)*(int *)((int)&local_10 + _DAT_10a8_1148 * 2 + 2);
      puVar3 = (undefined *)(&local_8)[_DAT_10a8_1148];
      if (PTR_DAT_10a8_0000_10a8_114c == (undefined *)0xffff) {
        PTR_DAT_10a8_0000_10a8_114c = PTR_DAT_10a8_0000_10a8_114a;
      }
      if (puVar3 == (undefined *)0xffff) {
        puVar3 = PTR_DAT_10a8_0000_10a8_114a;
      }
      if (PTR_DAT_10a8_0000_10a8_114c == puVar3) goto LAB_1008_9546;
    }
    iVar11 = (int)PTR_DAT_10a8_0001_10a8_00c0 * 0x76;
    _PTR_DAT_10a8_0000_10a8_114e =
         CONCAT22((int)*(char *)(_DAT_10a8_1148 + iVar11 + -0x7792),puVar3);
    PTR_DAT_10a8_0000_10a8_1152 = (undefined *)(int)*(char *)(_DAT_10a8_1148 + iVar11 + -0x778f);
    PTR_DAT_10a8_0000_10a8_1154 = (undefined *)(int)*(char *)(_DAT_10a8_1148 + iVar11 + -0x778c);
    break;
  case 9:
    if (param_2 == 0x204) {
      FUN_1008_9b66((int)PTR_DAT_10a8_0000_10a8_00c8,param_1);
      return;
    }
    puVar16 = &local_1a;
    puVar15 = (undefined4 *)&PTR_DAT_10a8_0000_10a8_7b54;
    for (iVar11 = 3; iVar11 != 0; iVar11 = iVar11 + -1) {
      puVar2 = puVar16;
      puVar16 = puVar16 + 1;
      puVar1 = puVar15;
      puVar15 = puVar15 + 1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)puVar16 = *(undefined2 *)puVar15;
    local_10 = (ulong)(uint)local_10;
    if (puStack_16 == (undefined *)&DAT_10a8_0002) {
      local_8 = (uint)local_10 + 1;
    }
    else {
      local_8 = 0;
    }
    uVar7 = local_8;
    if ((int)local_8 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
      puVar12 = puVar13 + local_8 * 2;
      local_c = (ulong)uVar18 << 0x10;
      do {
        uVar4 = *puVar12;
        local_4 = (int16 *)puVar12[1];
        in_DX = (uint)local_4 | uVar4;
        if ((in_DX == 0) || (*(long *)(uVar4 + 8) == CONCAT22(local_1a._2_2_,(undefined2)local_1a)))
        break;
        puVar12 = puVar12 + 2;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)PTR_DAT_10a8_0000_10a8_83c6);
    }
    if ((int)uVar7 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
      puStack_16 = (undefined *)&DAT_10a8_0002;
      puVar5 = *(uint **)(puVar13 + uVar7 * 2);
      local_c = local_c & 0xffff0000 | (ulong)*puVar5;
      puVar3 = (undefined *)*(int *)((int)puVar5 + 2);
    }
    else {
      if (((ulong)local_14 & 1) != 0) {
        puStack_16 = (undefined *)&DAT_10a8_0001;
        local_c = local_c & 0xffff0000 | (ulong)local_14._2_2_;
        piVar8 = FUN_1010_018e(local_14._2_2_);
        bVar19 = (undefined *)piVar8[1] == PTR_DAT_10a8_0001_10a8_00c0;
        local_c = (ulong)CONCAT12(bVar19,(undefined *)local_c);
        local_4 = (int16 *)in_DX;
        goto LAB_1008_96cd;
      }
      uVar7 = 0;
      puVar12 = puVar13;
      if (0 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
        do {
          uVar4 = *puVar12;
          local_4 = (int16 *)puVar12[1];
          local_c._2_2_ = uVar18;
          if ((((uint)local_4 | uVar4) == 0) ||
             (*(long *)(uVar4 + 8) == CONCAT22(local_1a._2_2_,(undefined2)local_1a))) break;
          uVar7 = uVar7 + 1;
          puVar12 = puVar12 + 2;
        } while ((int)uVar7 < (int)PTR_DAT_10a8_0000_10a8_83c6);
      }
      puVar6 = *(undefined2 **)(puVar13 + uVar7 * 2);
      local_c = CONCAT22(local_c._2_2_,*puVar6);
      puVar3 = (undefined *)*(int *)((int)puVar6 + 2);
    }
    local_10 = (ulong)uVar7;
    if (puVar3 == PTR_DAT_10a8_0001_10a8_00c0) {
      bVar19 = true;
    }
    else {
      bVar19 = false;
    }
LAB_1008_96cd:
    if ((!bVar19) || (PTR_DAT_10a8_0000_10a8_7b4c != (undefined *)&DAT_10a8_0002)) {
      local_10 = local_10 & 0xffff | ZEXT24(PTR_DAT_10a8_0000_10a8_7b60) << 0x10;
    }
    FUN_1030_3a94(&local_1a,2);
    if (!bVar19) {
      return;
    }
    FUN_1030_2da8((int16 *)0x0,(undefined *)0x0,uVar20);
    FUN_1020_2164(puStack_16,(undefined *)local_c);
    FUN_1030_2da8((int16 *)0x0,(undefined *)&DAT_10a8_0001,uVar20);
    return;
  case 10:
    if (PTR_DAT_10a8_0000_10a8_7b58 == (undefined *)&DAT_10a8_0001) {
      piVar8 = FUN_1010_018e((int)PTR_DAT_10a8_0000_10a8_7b5c);
      uVar7 = piVar8[1];
    }
    else {
      uVar20 = *(undefined4 *)(puVar13 + (int)PTR_DAT_10a8_0000_10a8_7b5e * 2);
      uVar7 = ((*(byte *)((int)uVar20 + 1) & 0x1e) << 8) >> 9;
    }
    _PTR_DAT_10a8_0000_10a8_1146 = _PTR_DAT_10a8_0000_10a8_1146 & 0xffff0000 | (ulong)uVar7;
    PTR_DAT_10a8_0000_10a8_1144 = (undefined *)&DAT_10a8_0002;
    break;
  case 0xb:
    PTR_DAT_10a8_0000_10a8_1144 = (undefined *)&DAT_10a8_0003;
    _PTR_DAT_10a8_0000_10a8_1146 = *(ulong *)(puVar13 + (int)PTR_DAT_10a8_0000_10a8_7b5e * 2);
    break;
  case 0xc:
    PTR_DAT_10a8_0000_10a8_1144 = (undefined *)0x7;
    _PTR_DAT_10a8_0000_10a8_1146 =
         _PTR_DAT_10a8_0000_10a8_1146 & 0xffff0000 | ZEXT24(PTR_DAT_10a8_0000_10a8_7b5c);
    break;
  case 0xd:
    uVar9 = FUN_1010_1074((uint)PTR_DAT_10a8_0000_10a8_7b5c);
    valist = (VA_LIST16)((int)s_From___s_c_c_10a8_10a2 + 6);
    uVar10 = FUN_1018_5112(0x184);
    _WSPRINTF((int16 *)0x7c44,(LPSTR)CONCAT22(uVar10,0x10a8),(LPCSTR)CONCAT22(uVar9,0x10a8),valist);
    PTR_DAT_10a8_0000_10a8_1144 = (undefined *)0xa;
    _PTR_DAT_10a8_0000_10a8_1146 = 0x7c440050;
  }
  FUN_1058_0832(PTR_DAT_10a8_0000_10a8_00c8,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16far FUN_1008_97da(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  char *local_4;

  local_4 = (char *)s_Deep_Space_10a8_066c;
  puVar7 = PTR_DAT_10a8_0000_10a8_7b58;
  if (PTR_DAT_10a8_0000_10a8_7b58 == (undefined *)&PTR_LOOP_10a8_0004) {
    puVar7 = PTR_DAT_10a8_0000_10a8_7b5a;
  }
  if (((uint)puVar7 & 1) == 0) {
    if ((((uint)puVar7 & 2) == 0) || (PTR_DAT_10a8_0000_10a8_7b5e == (undefined *)0xffff))
    goto LAB_1008_9866;
    local_4 = (char *)FUN_1010_0ffa(**(uint **)((int)PTR_DAT_10a8_0000_10a8_7b5e * 4 +
                                               (int)_PTR_DAT_10a8_0000_10a8_006e));
    pcVar8 = (char *)s__Summary_10a8_0680;
  }
  else {
    if (PTR_DAT_10a8_0000_10a8_7b5c == (undefined *)0xffff) goto LAB_1008_9866;
    local_4 = (char *)FUN_1010_1074((uint)PTR_DAT_10a8_0000_10a8_7b5c);
    pcVar8 = (char *)s__Summary_10a8_0677;
  }
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar2 != '\0');
  uVar4 = ~uVar4;
  puVar9 = (undefined2 *)(pcVar8 + -uVar4);
  iVar5 = -1;
  pcVar8 = local_4;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar2 != '\0');
  puVar10 = (undefined2 *)(pcVar8 + -1);
  for (uVar6 = uVar4 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
    puVar3 = puVar10;
    puVar10 = puVar10 + 1;
    puVar1 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar3 = *puVar1;
  }
  for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
    puVar3 = puVar10;
    puVar10 = (undefined2 *)((int)puVar10 + 1);
    puVar1 = puVar9;
    puVar9 = (undefined2 *)((int)puVar9 + 1);
    *(undefined *)puVar3 = *(undefined *)puVar1;
  }
LAB_1008_9866:
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar2 = local_4;
    local_4 = local_4 + 1;
  } while (*pcVar2 != '\0');
  uVar4 = ~uVar4;
  puVar9 = (undefined2 *)(local_4 + -uVar4);
  puVar10 = (undefined2 *)0x58b6;
  for (uVar6 = uVar4 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
    puVar3 = puVar10;
    puVar10 = puVar10 + 1;
    puVar1 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar3 = *puVar1;
  }
  for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
    puVar3 = puVar10;
    puVar10 = (undefined2 *)((int)puVar10 + 1);
    puVar1 = puVar9;
    puVar9 = (undefined2 *)((int)puVar9 + 1);
    *(undefined *)puVar3 = *(undefined *)puVar1;
  }
  INVALIDATERECT(1,(RECT16 *)0x0,0);
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

void __cdecl16far
FUN_1008_9894(HRGN16 param_1,int *param_2,int param_3,undefined4 param_4,undefined2 param_5,
             undefined param_6 [14],HDC16 param_7,HDC16 param_8,undefined param_9 [14],
             undefined2 param_10,undefined param_11 [14],undefined2 param_12,undefined2 param_13,
             undefined2 param_14)

{
  HDC16 hdest;
  int16 *__return_storage_ptr__;
  int iVar1;
  undefined2 unaff_BP;
  HRGN16 unaff_SI;
  HRGN16 unaff_DI;
  undefined4 in_stack_00000000;
  dword in_stack_00000046;
  undefined2 in_stack_0000fffa;
  undefined2 in_stack_0000fffc;

  hdest = CREATECOMPATIBLEDC(param_1);
  __return_storage_ptr__ =
       SELECTOBJECT((int16 *)PTR_DAT_10a8_0000_10a8_7c34,hdest,unaff_SI,unaff_DI,
                    (int16)CONCAT610(CONCAT24(param_3,CONCAT22(param_2,param_1)),
                                     CONCAT46(in_stack_00000000,
                                              CONCAT24(unaff_BP,CONCAT22(in_stack_0000fffc,
                                                                         in_stack_0000fffa)))));
  iVar1 = (param_2[2] - *param_2) / 2 + *param_2;
  BITBLT(0xc6,(int16)CONCAT214(iVar1 + -5,
                               CONCAT212((param_2[3] - param_2[1] >> 1) + param_2[1] + -5,
                                         CONCAT210(0xb,CONCAT28(0xc,CONCAT26(hdest,0x2300390088)))))
         ,(int16)CONCAT412(in_stack_00000000,
                           CONCAT210(unaff_BP,CONCAT28(__return_storage_ptr__,
                                                       CONCAT26(iVar1,CONCAT24(unaff_DI,CONCAT22(
                                                  unaff_SI,param_1)))))),
         (int16)CONCAT412(param_6._0_4_,
                          CONCAT210(param_5,CONCAT46(param_4,CONCAT24(param_3,CONCAT22(param_2,
                                                  param_1))))),
         (int16)CONCAT214(param_9._0_2_,CONCAT212(param_8,CONCAT210(param_7,param_6._4_10_))),
         param_9._2_2_,(int16)CONCAT412(param_11._0_4_,CONCAT210(param_10,param_9._4_10_)),
         (int16)CONCAT214(param_14,CONCAT212(param_13,CONCAT210(param_12,param_11._4_10_))),
         in_stack_00000046);
  BITBLT(0x86,(int16)(CONCAT214(iVar1 + -5,
                                CONCAT212((param_2[3] - param_2[1] >> 1) + param_2[1] + -5,
                                          CONCAT210(0xb,CONCAT28(0xc,CONCAT26(hdest,CONCAT24(-(uint)
                                                  (param_3 != 0),
                                                  CONCAT22((-(uint)(param_3 == 0) & 0xfff4) + 0x39,
                                                           0xee))))))) &
                     (undefined  [16])0xffffffffffffffff),
         (int16)CONCAT412(in_stack_00000000,
                          CONCAT210(unaff_BP,CONCAT28(__return_storage_ptr__,
                                                      CONCAT26(iVar1,CONCAT24(unaff_DI,CONCAT22(
                                                  unaff_SI,param_1)))))),
         (int16)CONCAT412(param_6._0_4_,
                          CONCAT210(param_5,CONCAT46(param_4,CONCAT24(param_3,CONCAT22(param_2,
                                                  param_1))))),
         (int16)CONCAT214(param_9._0_2_,CONCAT212(param_8,CONCAT210(param_7,param_6._4_10_))),
         param_9._2_2_,(int16)CONCAT412(param_11._0_4_,CONCAT210(param_10,param_9._4_10_)),
         (int16)CONCAT214(param_14,CONCAT212(param_13,CONCAT210(param_12,param_11._4_10_))),
         in_stack_00000046);
  SELECTOBJECT(__return_storage_ptr__,hdest,unaff_SI,unaff_DI,
               (int16)CONCAT610(CONCAT24(param_3,CONCAT22(param_2,param_1)),
                                CONCAT46(in_stack_00000000,
                                         CONCAT24(unaff_BP,CONCAT22(__return_storage_ptr__,iVar1))))
              );
  DELETEDC(hdest);
  return;
}


/*
Unable to decompile 'FUN_1008_9946'
Cause:
Low-level Error: Overlapping input varnodes
*/


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __cdecl16far FUN_1008_9af2(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  int local_8;

  if ((PTR_DAT_10a8_0000_10a8_7b5c != (undefined *)0xffff) &&
     (PTR_DAT_10a8_0000_10a8_7b5e != (undefined *)0xffff)) {
    return 1;
  }
  if (PTR_DAT_10a8_0000_10a8_7b5e != (undefined *)0xffff) {
    local_8 = 1;
    iVar3 = 0;
    puVar4 = (uint *)PTR_DAT_10a8_0000_10a8_006e;
    if (0 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
      do {
        uVar1 = *puVar4;
        uVar2 = puVar4[1];
        if ((uVar2 | uVar1) == 0) {
          return 0;
        }
        if ((*(long *)(uVar1 + 8) == _PTR_DAT_10a8_0000_10a8_7b54) &&
           (bVar5 = local_8 == 0, local_8 = local_8 + -1, bVar5)) {
          return 1;
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 2;
      } while (iVar3 < (int)PTR_DAT_10a8_0000_10a8_83c6);
    }
  }
  return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16far FUN_1008_9b66(int param_1,undefined4 param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  uint in_DX;
  uint *puVar9;
  undefined2 unaff_SI;
  long *plVar10;
  undefined2 unaff_DI;
  long *plVar11;
  uint **ppuVar12;
  int unaff_SS;
  undefined4 uVar13;
  undefined4 local_e6;
  long local_1e;
  undefined *local_1a;
  int local_14;
  undefined *local_10;
  uint *local_e;
  uint local_c;
  undefined *local_a;
  uint **local_8;
  undefined *local_4;

  uVar13 = CONCAT22(unaff_DI,unaff_SI);
  local_10 = (undefined *)0xffff;
  if (PTR_DAT_10a8_0000_10a8_7b5c == (undefined *)0xffff) {
    local_a = (undefined *)0x0;
  }
  else {
    local_e6._0_2_ = PTR_DAT_10a8_0000_10a8_7b5c;
    local_e6._2_2_ = 0xffff;
    local_a = (undefined *)&DAT_10a8_0002;
    if (PTR_DAT_10a8_0000_10a8_7b58 == (undefined *)&DAT_10a8_0001) {
      local_10 = (undefined *)0x0;
    }
  }
  local_4 = (undefined *)0x0;
  if (0 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
    plVar11 = (long *)((int)&local_e6 + (int)local_a * 2);
    local_8 = _PTR_DAT_10a8_0000_10a8_006e;
    do {
      local_e = *local_8;
      local_c = *(uint *)((int)local_8 + 2);
      in_DX = local_c | (uint)local_e;
      if (in_DX == 0) break;
      if (*(long *)(local_e + 4) == _PTR_DAT_10a8_0000_10a8_7b54) {
        if (PTR_DAT_10a8_0000_10a8_7b58 == (undefined *)&DAT_10a8_0002) {
          if (**(uint **)(PTR_DAT_10a8_0000_10a8_006e + (int)PTR_DAT_10a8_0000_10a8_7b5e * 4) ==
              *local_e) {
            local_10 = local_a;
          }
        }
        uVar4 = *local_e;
        *(uint *)plVar11 = uVar4 & 0xff | (uint)(byte)((ulong)uVar4 >> 8) << 8 | 0x8000;
        plVar11 = (long *)((int)plVar11 + 2);
        local_a = local_a + 1;
        if (&local_1e <= plVar11) break;
      }
      local_8 = (uint **)((ulong)local_8 & 0xffff0000 | (ulong)((int)local_8 + 4));
      local_4 = (undefined *)((int)local_4 + 1);
    } while ((int)local_4 < (int)PTR_DAT_10a8_0000_10a8_83c6);
  }
  if ((local_a == (undefined *)&DAT_10a8_0002) &&
     (PTR_DAT_10a8_0000_10a8_7b5c != (undefined *)0xffff)) {
    local_a = (undefined *)&DAT_10a8_0001;
  }
  local_4 = FUN_1058_0cc6(param_1,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)local_a,
                          (int)&local_e6,0,(HMENU16)local_10);
  puVar6 = PTR_DAT_10a8_0000_10a8_7b5c;
  if (-1 < (int)local_4) {
    plVar11 = &local_1e;
    plVar10 = (long *)&PTR_DAT_10a8_0000_10a8_7b54;
    for (iVar8 = 3; iVar8 != 0; iVar8 = iVar8 + -1) {
      plVar3 = plVar11;
      plVar11 = plVar11 + 1;
      plVar2 = plVar10;
      plVar10 = plVar10 + 1;
      *plVar3 = *plVar2;
    }
    *(undefined2 *)plVar11 = *(undefined2 *)plVar10;
    uVar4 = *(uint *)((int)&local_e6 + (int)local_4 * 2);
    if ((uVar4 & 0x8000) == 0) {
      local_1a = (undefined *)&DAT_10a8_0001;
      piVar7 = FUN_1010_018e((int)PTR_DAT_10a8_0000_10a8_7b5c);
      local_8 = (uint **)((ulong)local_8 & 0xffff0000 |
                         (ulong)((undefined *)piVar7[1] == PTR_DAT_10a8_0001_10a8_00c0));
      local_4 = (undefined *)in_DX;
    }
    else {
      local_1a = (undefined *)&DAT_10a8_0002;
      puVar6 = (undefined *)(uVar4 & 0xff | ((byte)((ulong)uVar4 >> 8) & 0x7f) << 8);
      local_8 = (uint **)(ZEXT24(puVar6) << 0x10);
      local_4 = (undefined *)0x0;
      if ((int)PTR_DAT_10a8_0000_10a8_83c6 < 1) {
        local_14 = 0;
        puVar9 = local_e;
        unaff_SS = (int)s_From___s_c_c_10a8_10a2 + 6;
      }
      else {
        ppuVar12 = (uint **)_PTR_DAT_10a8_0000_10a8_006e;
        local_14 = 0;
        do {
          puVar5 = *ppuVar12;
          local_c = (uint)((ulong)puVar5 >> 0x10);
          puVar9 = (uint *)puVar5;
          if (((local_c | (uint)puVar9) == 0) || ((undefined *)*puVar5 == puVar6)) break;
          ppuVar12 = ppuVar12 + 1;
          local_14 = local_14 + 1;
          piVar1 = (int *)&PTR_DAT_10a8_0000_10a8_83c6;
        } while (*piVar1 != local_14 && local_14 <= *piVar1);
      }
      local_8 = (uint **)((ulong)local_8 |
                         (ulong)(puVar9[1] == *(uint *)&PTR_DAT_10a8_0001_10a8_00c0));
      local_a = puVar6;
    }
    FUN_1030_3a94(&local_1e,2);
    if ((int)local_8 != 0) {
      FUN_1030_2da8((int16 *)0x0,(undefined *)0x0,uVar13);
      FUN_1020_2164(local_1a,puVar6);
      FUN_1030_2da8((int16 *)0x0,(undefined *)&DAT_10a8_0001,uVar13);
    }
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl16far FUN_1008_9d54(ulong param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  long lStackY_1e;
  long local_e;
  uint *local_a;
  undefined4 local_6;

  iVar5 = (int)param_1;
  uVar6 = (undefined2)(param_1 >> 0x10);
  if (param_3 == 0xffff) {
    if ((*(int *)(iVar5 + 2) == -1) || (*(long *)(iVar5 + 0x32) == 0)) {
      for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1 = param_2;
        param_2 = param_2 + 1;
        *puVar1 = 0xffffffff;
      }
      return;
    }
    iVar2 = FUN_1020_3842(iVar5,uVar6,*(int *)(iVar5 + 2));
    if ((int)(CONCAT11((char)*(undefined2 *)(iVar5 + 0x1c),
                       (char)((ulong)*(uint *)(iVar5 + 0x1a) >> 8)) & 0xfff) < iVar2) {
      param_3 = (uint)((ulong)*(undefined4 *)(iVar5 + 0x1a) >> 8) & 0xfff;
    }
    else {
      param_3 = FUN_1020_3842(iVar5,uVar6,*(int *)(iVar5 + 2));
    }
  }
  local_e = (long)(int)param_3;
  iVar2 = 0;
  local_a = (uint *)(param_1 & 0xffff0000 | (ulong)(iVar5 + 6));
  do {
    if (*local_a == 0) {
      *param_2 = 0;
    }
    else {
      lStackY_1e = (long)(int)*(char *)(iVar5 + 0xe + iVar2);
      local_6 = (lStackY_1e * local_e) / 100;
      if (((local_6 == 0) && (0 < local_e)) && ((DAT_10a8_0a46 & 2) != 0)) {
        iVar3 = FUN_1018_4a4a(3);
        local_6 = (long)(int)(uint)(iVar3 == 0);
      }
      uVar4 = *local_a;
      iVar3 = 0;
      if ((local_6._2_2_ < 1) && ((local_6 < 0 || ((uint)local_6 < uVar4)))) {
        iVar3 = local_6._2_2_;
        uVar4 = (uint)local_6;
      }
      *(uint *)param_2 = uVar4;
      *(int *)((int)param_2 + 2) = iVar3;
    }
    param_2 = param_2 + 1;
    local_a = (uint *)((ulong)local_a & 0xffff0000 | (ulong)((int)local_a + 2));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}



undefined2 __cdecl16far FUN_1010_0000(undefined4 *param_1)

{
  undefined2 uVar1;

                    // Segment:    3
                    // Offset:     0000baa0
                    // Length:     7f28
                    // Min Alloc:  7f28
                    // Flags:      1d50
                    //     Code
                    //     Discardable
                    //     Moveable
                    //     Preload
                    //     Impure (Non-shareable)
                    //
  if (PTR_DAT_10a8_0000_10a8_7b58 != (undefined *)&DAT_10a8_0001) {
    return 0;
  }
  uVar1 = FUN_1010_02b0((int)PTR_DAT_10a8_0000_10a8_7b5c,param_1);
  return uVar1;
}



undefined2 __cdecl16far FUN_1010_0080(ulong param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined2 uVar7;
  long lVar8;
  uint *puVar9;
  undefined2 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  undefined2 uVar17;
  undefined4 *local_c;

  plVar14 = param_2 + 0xe;
  lVar8 = *plVar14;
  puVar13 = (undefined4 *)param_1;
  puVar15 = param_2;
  for (iVar11 = 0xf; iVar11 != 0; iVar11 = iVar11 + -1) {
    puVar5 = puVar15;
    puVar15 = puVar15 + 1;
    puVar3 = puVar13;
    puVar13 = puVar13 + 1;
    *puVar5 = *puVar3;
  }
  *plVar14 = lVar8;
  local_c = (undefined4 *)(param_1 & 0xffff0000 | ZEXT24((undefined4 *)param_1 + 0xe));
  if (((undefined4 *)param_1)[0xe] == 0) {
    if (*plVar14 == 0) {
      return 1;
    }
    lVar8 = *plVar14;
    FUN_1038_05b8((uint)lVar8,(uint)((ulong)lVar8 >> 0x10));
    *plVar14 = 0;
    return 1;
  }
  puVar13 = (undefined4 *)param_1;
  if (*plVar14 == 0) {
    puVar9 = FUN_1038_0562(4,(uint)*(byte *)((int)*local_c + 2),0);
  }
  else {
    lVar8 = *plVar14;
    bVar6 = *(byte *)((int)lVar8 + 2);
    pbVar1 = (byte *)((int)*local_c + 3);
    if (*pbVar1 < bVar6 || *pbVar1 == bVar6) goto LAB_1010_0147;
    lVar8 = *plVar14;
    puVar9 = (uint *)FUN_1038_0522((uint *)lVar8,(int)((ulong)lVar8 >> 0x10),
                                   (uint)*(byte *)((int)*local_c + 2));
  }
  *(uint **)plVar14 = puVar9;
  *(undefined2 *)((int)param_2 + 0x3a) = puVar13;
LAB_1010_0147:
  uVar7 = *(undefined2 *)((int)(undefined4 *)param_1 + 0x3a);
  puVar10 = (undefined2 *)(*(int *)local_c + 4);
  lVar8 = *plVar14;
  uVar17 = (undefined2)((ulong)lVar8 >> 0x10);
  puVar16 = (undefined2 *)((int)lVar8 + 4);
  for (uVar12 = ((uint)*(byte *)(*(int *)local_c + 3) << 2) >> 1; uVar12 != 0; uVar12 = uVar12 - 1)
  {
    puVar4 = puVar16;
    puVar16 = puVar16 + 1;
    puVar2 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar4 = *puVar2;
  }
  for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
    puVar4 = puVar16;
    puVar16 = (undefined2 *)((int)puVar16 + 1);
    puVar2 = puVar10;
    puVar10 = (undefined2 *)((int)puVar10 + 1);
    *(undefined *)puVar4 = *(undefined *)puVar2;
  }
  lVar8 = *plVar14;
  *(undefined *)((int)lVar8 + 3) = *(undefined *)((int)*local_c + 3);
  return 1;
}



int * __cdecl16far FUN_1010_018e(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_8;
  undefined *local_4;

  if ((-1 < param_1) && (param_1 < (int)PTR_DAT_10a8_0000_10a8_003a)) {
    if (PTR_DAT_10a8_0000_10a8_003a == PTR_DAT_10a8_0000_10a8_7d52) {
      return (int *)(PTR_DAT_10a8_0000_10a8_006a + param_1 * 0x3c);
    }
    local_8 = (undefined *)0xffff;
    local_4 = PTR_DAT_10a8_0000_10a8_7d52;
    if (0 < (int)PTR_DAT_10a8_0000_10a8_7d52) {
      do {
        puVar3 = (undefined *)((int)(local_4 + (int)local_8) >> 1);
        iVar1 = *(int *)(PTR_DAT_10a8_0000_10a8_006a + (int)puVar3 * 0x3c);
        puVar2 = puVar3;
        if ((param_1 <= iVar1) && (puVar2 = local_8, local_4 = puVar3, iVar1 <= param_1)) {
          return (int *)(PTR_DAT_10a8_0000_10a8_006a + (int)puVar3 * 0x3c);
        }
        local_8 = puVar2;
      } while ((int)(local_8 + 1) < (int)local_4);
    }
  }
  return (int *)0x0;
}



void __cdecl16far FUN_1010_020c(undefined4 param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  longdouble lVar4;
  uint local_a;
  uint local_8;
  undefined *local_4;

  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 2) == -1) || ((*(uint *)(iVar2 + 0x1e) & 0xfff) == 0)) {
    lVar4 = (longdouble)1;
  }
  else {
    local_a = 0x8000;
    local_8 = local_8 & 0xff00 | (uint)(byte)(((byte)(*(uint *)(iVar2 + 0x20) >> 1) & 0x1f) + 7);
    local_4 = PTR_DAT_10a8_0001_10a8_00c0;
    PTR_DAT_10a8_0001_10a8_00c0 = (undefined *)*(undefined2 *)(iVar2 + 2);
    iVar1 = FUN_1060_32b2(&local_a);
    if (iVar1 == 1) {
      lVar4 = (longdouble)(qword)(*(uint *)(iVar2 + 0x1e) & 0xfff);
      FUN_10a0_0bb2();
    }
    else {
      lVar4 = (longdouble)1;
    }
    PTR_DAT_10a8_0001_10a8_00c0 = local_4;
  }
  *param_2 = (float)lVar4;
  return;
}



undefined2 __cdecl16far FUN_1010_02b0(int param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  uint in_DX;
  uint uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined uVar16;
  long local_6;

  bVar7 = false;
  if ((int)PTR_DAT_10a8_0000_10a8_7d52 < 1) {
    return 0;
  }
  if (param_1 < 0) {
    param_1 = *(int *)param_2;
    if (param_1 == -1) {
      FUN_1020_428c((int *)0x0,(int *)param_2);
      return 1;
    }
    bVar7 = true;
  }
  puVar8 = (undefined4 *)FUN_1010_018e(param_1);
  local_6 = CONCAT22(in_DX,puVar8);
  uVar11 = in_DX | (uint)puVar8;
  if ((uVar11 == 0) || (param_2 == (undefined4 *)0x0)) goto LAB_1010_0462;
  uVar16 = (undefined)(in_DX >> 8);
  if (!bVar7) {
    if (param_2 == (undefined4 *)&PTR_DAT_10a8_0000_10a8_7bd6) {
      FUN_1010_0080(CONCAT13(uVar16,CONCAT12((char)in_DX,puVar8)),
                    (undefined4 *)&PTR_DAT_10a8_0000_10a8_7bd6);
    }
    else {
      for (iVar10 = 0xf; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar4 = param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar4 = *puVar2;
      }
    }
    goto LAB_1010_0462;
  }
  FUN_1020_428c((int *)CONCAT13(uVar16,CONCAT12((char)in_DX,puVar8)),(int *)param_2);
  if (puVar8[0xe] != param_2[0xe]) {
    if (puVar8[0xe] == 0) {
      if (param_2[0xe] != 0) {
        uVar5 = param_2[0xe];
        puVar9 = FUN_1038_0562(4,(uint)*(byte *)((int)uVar5 + 3),0);
        *(uint **)(puVar8 + 0xe) = puVar9;
        *(uint *)((int)puVar8 + 0x3a) = uVar11;
      }
    }
    else if (param_2[0xe] == 0) {
      uVar5 = puVar8[0xe];
      FUN_1038_05b8((uint)uVar5,(uint)((ulong)uVar5 >> 0x10));
      puVar8[0xe] = 0;
      goto LAB_1010_03de;
    }
    uVar5 = param_2[0xe];
    uVar6 = puVar8[0xe];
    if (*(byte *)((int)uVar6 + 2) < *(byte *)((int)uVar5 + 3)) {
      uVar6 = param_2[0xe];
      uVar5 = puVar8[0xe];
      iVar10 = FUN_1038_0522((uint *)uVar5,(int)((ulong)uVar5 >> 0x10),*(byte *)((int)uVar6 + 3) + 2
                            );
      *(int *)(puVar8 + 0xe) = iVar10;
      *(uint *)((int)puVar8 + 0x3a) = uVar11;
    }
    uVar5 = param_2[0xe];
    uVar14 = (undefined2)((ulong)uVar5 >> 0x10);
    iVar10 = (int)uVar5;
    uVar5 = puVar8[0xe];
    uVar15 = (undefined2)((ulong)uVar5 >> 0x10);
    puVar13 = (undefined2 *)((int)uVar5 + 4);
    puVar12 = (undefined2 *)(iVar10 + 4);
    for (uVar11 = ((uint)*(byte *)(iVar10 + 3) << 2) >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
      puVar3 = puVar13;
      puVar13 = puVar13 + 1;
      puVar1 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar3 = *puVar1;
    }
    for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar3 = puVar13;
      puVar13 = (undefined2 *)((int)puVar13 + 1);
      puVar1 = puVar12;
      puVar12 = (undefined2 *)((int)puVar12 + 1);
      *(undefined *)puVar3 = *(undefined *)puVar1;
    }
    uVar5 = param_2[0xe];
    uVar6 = puVar8[0xe];
    *(undefined *)((int)uVar6 + 3) = *(undefined *)((int)uVar5 + 3);
  }
LAB_1010_03de:
  for (iVar10 = 0xe; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar4 = puVar8;
    puVar8 = puVar8 + 1;
    puVar2 = param_2;
    param_2 = param_2 + 1;
    *puVar4 = *puVar2;
  }
  if (((DAT_10a8_0a47 & 0x40) != 0) && (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0x0)) {
    FUN_1090_88fa();
  }
LAB_1010_0462:
  if (local_6 == 0) {
    return 0;
  }
  return 1;
}
