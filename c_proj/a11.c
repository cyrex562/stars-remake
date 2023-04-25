


void __cdecl16far FUN_1010_0472(int *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  long *plVar7;
  long local_10;
  undefined *local_c;

  if (*param_1 == -1) {
    if ((*(byte *)((int)param_1 + 3) & 0x80) != 0) {
      uVar1 = param_1[1];
      local_c = (undefined *)(uVar1 & 0xff | ((byte)((ulong)uVar1 >> 8) & 0x7f) << 8);
      goto LAB_1010_053d;
    }
    iVar5 = param_1[1] * 4;
    iVar3 = *(int *)((int)&PTR_DAT_10a8_0000_10a8_6238 + iVar5);
    iVar5 = *(int *)((int)&PTR_DAT_10a8_0000_10a8_623a + iVar5);
  }
  else {
    iVar3 = *param_1;
    iVar5 = param_1[1];
  }
  local_10 = CONCAT22(iVar5,iVar3);
  local_c = (undefined *)0xffff;
  iVar3 = 0;
  puVar6 = (uint *)PTR_DAT_10a8_0000_10a8_006e;
  if (0 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
    do {
      puVar2 = (undefined2 *)*puVar6;
      uVar1 = puVar6[1];
      if ((uVar1 | (uint)puVar2) == 0) break;
      if (*(long *)(puVar2 + 4) == local_10) {
        if ((undefined *)puVar2[1] == PTR_DAT_10a8_0001_10a8_00c0) {
          local_c = (undefined *)*puVar2;
          goto LAB_1010_053d;
        }
        if (local_c == (undefined *)0xffff) {
          local_c = (undefined *)*puVar2;
        }
      }
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 2;
    } while (iVar3 < (int)PTR_DAT_10a8_0000_10a8_83c6);
  }
  puVar4 = (undefined *)0x0;
  if (0 < (int)PTR_DAT_10a8_0000_10a8_7d52) {
    plVar7 = (long *)&PTR_DAT_10a8_0000_10a8_6238;
    do {
      if (local_10 == *plVar7) {
        FUN_1020_24c8(0,puVar4);
        return;
      }
      plVar7 = plVar7 + 1;
      puVar4 = puVar4 + 1;
    } while ((int)puVar4 < (int)PTR_DAT_10a8_0000_10a8_7d52);
  }
  if (local_c == (undefined *)0xffff) {
    return;
  }
LAB_1010_053d:
  FUN_1028_1c46(0,local_c);
  return;
}



// WARNING: Could not reconcile some variable overlaps

void __cdecl16far FUN_1010_054a(ulong param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lStackY_2c;
  undefined4 local_20;
  int local_1c;
  uint local_1a;
  int local_18;
  long local_14;
  long local_10;
  long local_c;
  undefined4 *local_8;
  int local_4;

  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  iVar4 = 999;
  local_1a = 0xffff;
  local_18 = 0;
  local_4 = 0;
  iVar6 = local_18;
  if (*(char *)((int)param_1 + 0x7a) != '\0') {
    local_8 = (undefined4 *)(param_1 & 0xffff0000 | (ulong)((int)param_1 + 0x3a));
    iVar6 = 0;
    iVar5 = iVar4;
    do {
      local_20 = *local_8;
      local_20._3_1_ = (byte)((ulong)local_20 >> 0x18);
      iVar4 = iVar5;
      if ((local_20._3_1_ != '\0') && (iVar1 = FUN_1060_32b2((uint *)&local_20), iVar1 != 0)) {
        if ((int)local_20 == 1) {
          local_1a = (uint)local_20._2_1_;
        }
        else {
          if ((int)local_20 == 0x10) {
            uVar2 = *(int *)(local_1c + 0x36) * (uint)local_20._3_1_;
            local_10 = CONCAT22((int)((ulong)local_10 >> 0x10) + (uint)CARRY2((uint)local_10,uVar2),
                                (uint)local_10 + uVar2);
          }
          else {
            if ((int)local_20 != 0x20) {
              if ((int)local_20 == 0x40) {
                uVar2 = (*(int *)(local_1c + 0x36) + *(int *)(local_1c + 0x38)) *
                        (uint)local_20._3_1_;
                local_c = CONCAT22((int)((ulong)local_c >> 0x10) + (uint)CARRY2((uint)local_c,uVar2)
                                   ,(uint)local_c + uVar2);
              }
              else if ((int)local_20 == 0x1000) {
                if (local_20._2_1_ == 7) {
                  uVar2 = (uint)local_20._3_1_;
                }
                else {
                  if (local_20._2_1_ != 8) goto LAB_1010_0649;
                  uVar2 = (uint)local_20._3_1_ * 2;
                }
                iVar6 = iVar6 + uVar2;
              }
              goto LAB_1010_0649;
            }
            uVar2 = *(int *)(local_1c + 0x36) * (uint)local_20._3_1_;
            local_14 = CONCAT22((int)((ulong)local_14 >> 0x10) + (uint)CARRY2((uint)local_14,uVar2),
                                (uint)local_14 + uVar2);
          }
          iVar4 = *(int *)(local_1c + 0x34);
          if (iVar5 < iVar4) {
            iVar4 = iVar5;
          }
        }
      }
LAB_1010_0649:
      local_8 = (undefined4 *)((ulong)local_8 & 0xffff0000 | (ulong)((int)local_8 + 4));
      local_4 = local_4 + 1;
      iVar5 = iVar4;
    } while (local_4 < (int)(uint)*(byte *)((int)param_1 + 0x7a));
  }
  local_18 = iVar6;
  iVar6 = 9;
  piVar3 = (int *)(local_1a * 0x4a + 0x14ce);
  do {
    if (*piVar3 < 0x79) break;
    piVar3 = piVar3 + -1;
    iVar6 = iVar6 + -1;
  } while (0 < iVar6);
  lStackY_2c = (long)(local_18 / 2 + iVar6);
  *(long *)((int)param_1 + 0x83) = (((iVar4 * local_10) / 10 + local_14 + local_c) * lStackY_2c) / 5
  ;
  return;
}



void __cdecl16far FUN_1010_06c6(void)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;

  iVar2 = 0;
  if (0 < (int)PTR_DAT_10a8_0002_10a8_0038) {
    puVar4 = (ulong *)&PTR_DAT_10a8_0000_10a8_0072;
    do {
      if (*puVar4 != 0) {
        iVar3 = 0;
        do {
          uVar1 = *puVar4;
          if ((*(byte *)((int)uVar1 + iVar3 + 0x7c) & 2) == 0) {
            FUN_1010_054a(uVar1 & 0xffff0000 | (ulong)(uint)(*(int *)puVar4 + iVar3));
          }
          iVar3 = iVar3 + 0x87;
        } while (iVar3 < 0x870);
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)PTR_DAT_10a8_0002_10a8_0038);
  }
  return;
}



int __cdecl16far FUN_1010_0716(ulong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_14;
  int local_10;
  int local_e;
  ulong local_c;
  undefined2 local_8;
  undefined4 *local_6;
  uint local_4;

  local_4 = (uint)(param_1 >> 0x10);
  local_e = 0;
  local_8 = 0;
  if (*(char *)((int)param_1 + 0x7a) != '\0') {
    puVar1 = (undefined4 *)((int)param_1 + 0x3a);
    local_c = param_1 & 0xffff | (ulong)local_4 << 0x10;
    iVar2 = 0;
    local_6 = puVar1;
    do {
      if ((*(int *)puVar1 == 4) && (*(char *)((int)puVar1 + 3) != '\0')) {
        local_14 = *puVar1;
        FUN_1060_32b2((uint *)&local_14);
        local_e = local_e + (uint)*(byte *)((int)puVar1 + 3) * *(int *)(local_10 + 0x34);
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)((int)local_c + 0x7a));
  }
  return local_e;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __cdecl16far
FUN_1010_0792(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  VA_LIST16 unaff_SI;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  undefined2 unaff_SS;
  undefined local_34 [4];
  ulong local_30;

  if (param_6 == 0) {
    param_6 = param_1 * 0x76 + -0x77a2;
  }
  if (*(char *)(param_6 + 0x56) == '\0') {
    _WSPRINTF((int16 *)local_34,(LPSTR)CONCAT22(0x6a4,unaff_SS),(LPCSTR)CONCAT22(param_1 + 1,0x10a8)
              ,unaff_SI);
    if (param_3 == 0) {
      pcVar9 = (char *)&PTR_PTR_DAT_10a8_0000_10a8_7327_10a8_06ae;
      puVar12 = (undefined4 *)local_34;
      uVar6 = 0xffff;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar2 = pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (*pcVar2 != '\0');
      uVar6 = ~uVar6;
      puVar10 = (undefined2 *)(pcVar9 + -uVar6);
      iVar7 = -1;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        puVar3 = puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      } while (*(char *)puVar3 != '\0');
      puVar11 = (undefined2 *)((int)puVar12 + -1);
      for (uVar8 = uVar6 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
        puVar4 = puVar11;
        puVar11 = puVar11 + 1;
        puVar1 = puVar10;
        puVar10 = puVar10 + 1;
        *puVar4 = *puVar1;
      }
      for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
        puVar4 = puVar11;
        puVar11 = (undefined2 *)((int)puVar11 + 1);
        puVar1 = puVar10;
        puVar10 = (undefined2 *)((int)puVar10 + 1);
        *(undefined *)puVar4 = *(undefined *)puVar1;
      }
    }
    if (param_5 == 1) {
      pcVar9 = (char *)&PTR_PTR_DAT_10a8_0000_10a8_6820_10a8_06b1;
    }
    else {
      if (param_5 != 2) goto LAB_1010_0935;
      pcVar9 = (char *)&PTR_PTR_DAT_10a8_0000_10a8_6920_10a8_06b6;
    }
  }
  else {
    if (param_4 == 0) {
      local_34 = (undefined  [4])((ulong)local_34 & 0xffffff00);
    }
    else {
      local_34 = (undefined  [4])_PTR_PTR_DAT_10a8_0000_10a8_6874_10a8_068a;
      local_30 = local_30 & 0xffffff00 | (ulong)DAT_10a8_068e;
      if (param_2 != 0) {
        local_34 = (undefined  [4])
                   CONCAT31((int3)((ulong)_PTR_PTR_DAT_10a8_0000_10a8_6874_10a8_068a >> 8),0x54);
      }
    }
    pcVar9 = (char *)(param_6 + 0x56);
    puVar12 = (undefined4 *)local_34;
    uVar6 = 0xffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar2 != '\0');
    uVar6 = ~uVar6;
    puVar10 = (undefined2 *)(pcVar9 + -uVar6);
    iVar7 = -1;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      puVar3 = puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    } while (*(char *)puVar3 != '\0');
    puVar11 = (undefined2 *)((int)puVar12 + -1);
    for (uVar8 = uVar6 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
      puVar4 = puVar11;
      puVar11 = puVar11 + 1;
      puVar1 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar4 = *puVar1;
    }
    for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar4 = puVar11;
      puVar11 = (undefined2 *)((int)puVar11 + 1);
      puVar1 = puVar10;
      puVar10 = (undefined2 *)((int)puVar10 + 1);
      *(undefined *)puVar4 = *(undefined *)puVar1;
    }
    puVar12 = (undefined4 *)local_34;
    uVar6 = 0xffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      puVar3 = puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    } while (*(char *)puVar3 != '\0');
    cVar5 = (&stack0xffca)[~uVar6];
    puVar12 = (undefined4 *)(&stack0xffca + ~uVar6);
    while ((cVar5 == ' ' && (local_34 <= puVar12))) {
      *(char *)puVar12 = '\0';
      cVar5 = *(char *)(undefined4 *)((int)puVar12 + -1);
      puVar12 = (undefined4 *)((int)puVar12 + -1);
    }
    if (puVar12 < local_34) {
      local_34 = (undefined  [4])s_No_Name_10a8_068f._0_4_;
      local_30 = s_No_Name_10a8_068f._4_4_;
    }
    if (param_3 != 0) {
      puVar12 = (undefined4 *)local_34;
      uVar6 = 0xffff;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        puVar3 = puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      } while (*(char *)puVar3 != '\0');
      if (((&stack0xffca)[~uVar6] != 's') &&
         (((&stack0xffca)[~uVar6] != 'e' || ((&stack0xffc9)[~uVar6] != 's')))) {
        pcVar9 = (char *)&DAT_10a8_0697;
        puVar12 = (undefined4 *)local_34;
        uVar6 = 0xffff;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar2 = pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (*pcVar2 != '\0');
        uVar6 = ~uVar6;
        puVar10 = (undefined2 *)(pcVar9 + -uVar6);
        iVar7 = -1;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          puVar3 = puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        } while (*(char *)puVar3 != '\0');
        puVar11 = (undefined2 *)((int)puVar12 + -1);
        for (uVar8 = uVar6 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
          puVar4 = puVar11;
          puVar11 = puVar11 + 1;
          puVar1 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar4 = *puVar1;
        }
        for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar4 = puVar11;
          puVar11 = (undefined2 *)((int)puVar11 + 1);
          puVar1 = puVar10;
          puVar10 = (undefined2 *)((int)puVar10 + 1);
          *(undefined *)puVar4 = *(undefined *)puVar1;
        }
      }
    }
    if (param_5 == 1) {
      pcVar9 = (char *)s__have_10a8_0699;
    }
    else {
      if (param_5 != 2) goto LAB_1010_0935;
      pcVar9 = (char *)&PTR_PTR_DAT_10a8_0000_10a8_6120_10a8_069f;
    }
  }
  puVar12 = (undefined4 *)local_34;
  uVar6 = 0xffff;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar2 = pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (*pcVar2 != '\0');
  uVar6 = ~uVar6;
  puVar10 = (undefined2 *)(pcVar9 + -uVar6);
  iVar7 = -1;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    puVar3 = puVar12;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  } while (*(char *)puVar3 != '\0');
  puVar11 = (undefined2 *)((int)puVar12 + -1);
  for (uVar8 = uVar6 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
    puVar4 = puVar11;
    puVar11 = puVar11 + 1;
    puVar1 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar4 = *puVar1;
  }
  for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
    puVar4 = puVar11;
    puVar11 = (undefined2 *)((int)puVar11 + 1);
    puVar1 = puVar10;
    puVar10 = (undefined2 *)((int)puVar10 + 1);
    *(undefined *)puVar4 = *(undefined *)puVar1;
  }
LAB_1010_0935:
  puVar12 = (undefined4 *)local_34;
  uVar6 = 0xffff;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    puVar3 = puVar12;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  } while (*(char *)puVar3 != '\0');
  uVar6 = ~uVar6;
  puVar10 = (undefined2 *)((int)puVar12 - uVar6);
  puVar11 = (undefined2 *)&DAT_10a8_86de;
  for (uVar8 = uVar6 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
    puVar4 = puVar11;
    puVar11 = puVar11 + 1;
    puVar1 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar4 = *puVar1;
  }
  for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
    puVar4 = puVar11;
    puVar11 = (undefined2 *)((int)puVar11 + 1);
    puVar1 = puVar10;
    puVar10 = (undefined2 *)((int)puVar10 + 1);
    *(undefined *)puVar4 = *(undefined *)puVar1;
  }
  return (int)&DAT_10a8_86de;
}



// WARNING: Could not reconcile some variable overlaps

undefined2 __cdecl16far FUN_1010_095c(ulong param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  ulong uStackY_28;
  ulong uStackY_24;
  int local_16;
  undefined4 local_12;
  int local_e;
  undefined4 local_a;
  int local_6;
  int local_4;

  *param_3 = 0;
  *(undefined2 *)((int)param_4 + 2) = 0;
  *(undefined2 *)param_4 = 0;
  *(undefined2 *)((int)param_2 + 2) = 0;
  *(undefined2 *)param_2 = 0;
  local_6 = 0;
  local_a._0_2_ = (int *)((int)param_1 + 0xc);
  local_a = (int *)(param_1 & 0xffff0000);
  do {
    if (0 < *(int *)local_a) {
      local_4 = 0;
      uVar6 = (undefined2)(param_1 >> 0x10);
      uVar2 = *(undefined4 *)(*(int *)((int)param_1 + 2) * 4 + 0x72);
      uVar7 = (undefined2)((ulong)uVar2 >> 0x10);
      local_16 = (int)uVar2;
      if (*(char *)(local_16 + local_6 + 0x7a) != '\0') {
        local_a = (int *)((ulong)local_a & 0xffff0000 | ZEXT24((int *)local_a));
        iVar5 = 0;
        do {
          if (*(int *)(local_16 + local_6 + iVar5 + 0x3a) == 0x40) {
            local_12 = *(undefined4 *)(local_16 + local_6 + 0x3a + iVar5);
            FUN_1060_32b2((uint *)&local_12);
            uStackY_24 = (ulong)local_12._3_1_;
            plVar1 = param_2;
            *plVar1 = *plVar1 + (long)*(int *)(local_e + 0x36) * uStackY_24 * (long)*local_a;
            uStackY_24 = (ulong)local_12._3_1_;
            plVar1 = param_4;
            *plVar1 = *plVar1 + (long)*(int *)(local_e + 0x38) * uStackY_24 * (long)*local_a;
            uVar3 = (uint)local_12._2_1_;
            if (uVar3 < 5) {
              iVar4 = 1;
            }
            else if ((uVar3 < 8) || (10 < uVar3)) {
              iVar4 = 0;
            }
            else {
              iVar4 = (uVar3 - 7) * 3;
            }
            if (0 < iVar4) {
              uStackY_28 = (ulong)local_12._3_1_;
              plVar1 = param_3;
              *plVar1 = *plVar1 + uStackY_28 * (long)*local_a * (long)iVar4;
            }
          }
          iVar5 = iVar5 + 4;
          uVar2 = *(undefined4 *)(*(int *)((int)param_1 + 2) * 4 + 0x72);
          uVar7 = (undefined2)((ulong)uVar2 >> 0x10);
          local_16 = (int)uVar2;
          local_4 = local_4 + 1;
        } while (local_4 < (int)(uint)*(byte *)(local_16 + local_6 + 0x7a));
      }
    }
    local_a._0_2_ = (int *)local_a + 1;
    local_6 = local_6 + 0x87;
  } while (local_6 < 0x870);
  if ((*param_2 == 0) && (*param_4 == 0)) {
    return 0;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16far FUN_1010_0afa(void)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  int unaff_SS;
  int iVar13;
  int local_10;
  int local_e;
  int local_4;

  iVar13 = (int)s_From___s_c_c_10a8_10a2 + 6;
  iVar6 = 0;
  if (0 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
    iVar8 = 0;
    do {
      uVar11 = (undefined2)((ulong)_PTR_DAT_10a8_0000_10a8_006e >> 0x10);
      uVar3 = *(uint *)(iVar8 + (int)_PTR_DAT_10a8_0000_10a8_006e);
      uVar4 = *(uint *)(iVar8 + (int)_PTR_DAT_10a8_0000_10a8_006e + 2);
      if ((uVar4 | uVar3) == 0) break;
      *(undefined4 *)(uVar3 + 0x68) = 0;
      pbVar1 = (byte *)(uVar3 + 5);
      *pbVar1 = *pbVar1 & 0xf7;
      iVar8 = iVar8 + 4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)PTR_DAT_10a8_0000_10a8_83c6);
  }
  iVar8 = 0;
  iVar6 = *_PTR_DAT_10a8_0000_10a8_006e;
  uVar11 = *(undefined2 *)((int)_PTR_DAT_10a8_0000_10a8_006e + 2);
  if (0 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
    local_10 = 4;
    do {
      if (((*(byte *)(iVar6 + 5) & 4) == 0) && (*(long *)(iVar6 + 0x68) == 0)) {
        *(int *)(iVar6 + 0x68) = iVar6;
        *(undefined2 *)(iVar6 + 0x6a) = uVar11;
        local_e = iVar8 + 1;
        uVar5 = *(undefined4 *)&PTR_DAT_10a8_0000_10a8_006e;
        uVar12 = (undefined2)((ulong)uVar5 >> 0x10);
        piVar9 = (int *)((int)uVar5 + local_10);
        iVar10 = *piVar9;
        local_4 = piVar9[1];
        if (local_e < *(int *)&PTR_DAT_10a8_0000_10a8_83c6) {
          iVar7 = local_e * 4;
          do {
            if ((((*(byte *)(iVar10 + 5) & 4) == 0) && (*(long *)(iVar10 + 0x68) == 0)) &&
               (*(long *)(iVar6 + 8) == *(long *)(iVar10 + 8))) {
              *(undefined4 *)(iVar10 + 0x68) = *(undefined4 *)(iVar6 + 0x68);
              *(int *)(iVar6 + 0x68) = iVar10;
              *(int *)(iVar6 + 0x6a) = local_4;
            }
            iVar7 = iVar7 + 4;
            uVar5 = *(undefined4 *)&PTR_DAT_10a8_0000_10a8_006e;
            uVar12 = (undefined2)((ulong)uVar5 >> 0x10);
            piVar9 = (int *)((int)uVar5 + iVar7);
            iVar10 = *piVar9;
            local_4 = piVar9[1];
            local_e = local_e + 1;
            piVar2 = (int *)&PTR_DAT_10a8_0000_10a8_83c6;
            iVar13 = unaff_SS;
          } while (*piVar2 != local_e && local_e <= *piVar2);
        }
      }
      local_10 = local_10 + 4;
      uVar5 = *(undefined4 *)&PTR_DAT_10a8_0000_10a8_006e;
      uVar11 = (undefined2)((ulong)uVar5 >> 0x10);
      iVar10 = (int)uVar5;
      iVar6 = *(int *)(local_10 + iVar10 + -4);
      uVar11 = *(undefined2 *)(local_10 + iVar10 + -2);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)&PTR_DAT_10a8_0000_10a8_83c6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __cdecl16far FUN_1010_0c1a(undefined4 *param_1)

{
  undefined2 uVar1;

  if (PTR_DAT_10a8_0000_10a8_7b58 != (undefined *)&DAT_10a8_0002) {
    return 0;
  }
  uVar1 = FUN_1010_0cda(**(uint **)((int)PTR_DAT_10a8_0000_10a8_7b5e * 4 +
                                   (int)_PTR_DAT_10a8_0000_10a8_006e),param_1);
  return uVar1;
}



int * __cdecl16far FUN_1010_0c48(uint param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int *piVar5;
  undefined *puVar6;
  undefined *local_8;

  uVar4 = ((param_1 >> 8 & 0x1e) << 8) >> 9;
  param_1 = param_1 & 0x1fff;
  iVar1 = 0;
  if (uVar4 != 0) {
    piVar5 = (int *)&PTR_DAT_10a8_0000_10a8_8862;
    do {
      iVar1 = iVar1 + *piVar5;
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 0x3b;
    } while (uVar4 != 0);
  }
  if (iVar1 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
    local_8 = PTR_DAT_10a8_0000_10a8_83c6;
    puVar2 = (undefined *)(iVar1 + -1);
    do {
      puVar6 = (undefined *)((int)(local_8 + (int)puVar2) >> 1);
      piVar5 = *(int **)(PTR_DAT_10a8_0000_10a8_006e + (int)puVar6 * 4);
      iVar1 = *piVar5;
      puVar3 = puVar6;
      if (((int)param_1 <= iVar1) && (puVar3 = puVar2, local_8 = puVar6, iVar1 <= (int)param_1)) {
        return piVar5;
      }
      puVar2 = puVar3;
    } while ((int)(puVar3 + 1) < (int)local_8);
  }
  return (int *)0x0;
}



undefined2 __cdecl16far FUN_1010_0cda(uint param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint in_DX;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  bool bVar14;
  long local_6;

  if (0 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
    bVar14 = -1 < (int)param_1;
    if (!bVar14) {
      param_1 = *(uint *)param_2;
    }
    puVar7 = (undefined4 *)FUN_1010_0c48(param_1);
    local_6 = CONCAT22(in_DX,puVar7);
    uVar9 = in_DX | (uint)puVar7;
    if ((uVar9 != 0) && (param_2 != (undefined4 *)0x0)) {
      if (bVar14) {
        if (param_2 == (undefined4 *)&PTR_DAT_10a8_0000_10a8_7b62) {
          FUN_1010_0e1e(puVar7,in_DX,(undefined4 *)&PTR_DAT_10a8_0000_10a8_7b62);
        }
        else {
          for (iVar8 = 0x1d; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar4 = param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar4 = *puVar2;
          }
        }
      }
      else {
        FUN_1020_3e0a((uint *)CONCAT22(in_DX,puVar7),(uint *)param_2);
        if (puVar7[0x19] != param_2[0x19]) {
          uVar5 = puVar7[0x19];
          if ((int)(uint)*(byte *)((int)uVar5 + 2) < *(int *)((int)param_2 + 0x62)) {
            uVar5 = puVar7[0x19];
            iVar8 = FUN_1038_0522((uint *)uVar5,(int)((ulong)uVar5 >> 0x10),
                                  *(int *)((int)param_2 + 0x62) + 3);
            *(int *)(puVar7 + 0x19) = iVar8;
            *(uint *)((int)puVar7 + 0x66) = uVar9;
          }
          uVar5 = param_2[0x19];
          uVar12 = (undefined2)((ulong)uVar5 >> 0x10);
          iVar8 = (int)uVar5;
          uVar5 = puVar7[0x19];
          uVar13 = (undefined2)((ulong)uVar5 >> 0x10);
          puVar11 = (undefined2 *)((int)uVar5 + 4);
          puVar10 = (undefined2 *)(iVar8 + 4);
          for (uVar9 = (uint)*(byte *)(iVar8 + 3) * 0x12 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
            puVar3 = puVar11;
            puVar11 = puVar11 + 1;
            puVar1 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar3 = *puVar1;
          }
          for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar3 = puVar11;
            puVar11 = (undefined2 *)((int)puVar11 + 1);
            puVar1 = puVar10;
            puVar10 = (undefined2 *)((int)puVar10 + 1);
            *(undefined *)puVar3 = *(undefined *)puVar1;
          }
          uVar5 = param_2[0x19];
          uVar6 = puVar7[0x19];
          *(undefined *)((int)uVar6 + 3) = *(undefined *)((int)uVar5 + 3);
        }
        for (iVar8 = 0x19; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar4 = puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = param_2;
          param_2 = param_2 + 1;
          *puVar4 = *puVar2;
        }
        if (((DAT_10a8_0a47 & 0x40) != 0) && (PTR_DAT_10a8_0001_10a8_00c0 == (undefined *)0x0)) {
          FUN_1090_88fa();
        }
      }
    }
    if (local_6 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined2 __cdecl16far FUN_1010_0e1e(undefined4 *param_1,undefined2 param_2,undefined4 *param_3)

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
  long *plVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  undefined2 uVar17;
  uint uVar18;
  undefined4 *local_c;

  plVar13 = param_3 + 0x19;
  lVar8 = *plVar13;
  puVar14 = param_1;
  puVar15 = param_3;
  for (iVar11 = 0x1d; iVar11 != 0; iVar11 = iVar11 + -1) {
    puVar5 = puVar15;
    puVar15 = puVar15 + 1;
    puVar3 = puVar14;
    puVar14 = puVar14 + 1;
    *puVar5 = *puVar3;
  }
  local_c = (undefined4 *)CONCAT22(param_2,param_1 + 0x19);
  uVar18 = (uint)lVar8;
  uVar12 = (uint)((ulong)lVar8 >> 0x10);
  if (param_1[0x19] == 0) {
    if (lVar8 == 0) {
      return 1;
    }
    FUN_1038_05b8(uVar18,uVar12);
    return 1;
  }
  *(uint *)plVar13 = uVar18;
  *(uint *)((int)param_3 + 0x66) = uVar12;
  uVar12 = uVar12 | uVar18;
  if (uVar12 == 0) {
    puVar9 = FUN_1038_0562(0x12,(uint)*(byte *)((int)*local_c + 2),0);
  }
  else {
    lVar8 = *plVar13;
    bVar6 = *(byte *)((int)lVar8 + 2);
    pbVar1 = (byte *)((int)*local_c + 3);
    if (*pbVar1 < bVar6 || *pbVar1 == bVar6) goto LAB_1010_0ede;
    lVar8 = *plVar13;
    puVar9 = (uint *)FUN_1038_0522((uint *)lVar8,(int)((ulong)lVar8 >> 0x10),
                                   (uint)*(byte *)((int)*local_c + 2));
  }
  *(uint **)plVar13 = puVar9;
  *(uint *)((int)param_3 + 0x66) = uVar12;
LAB_1010_0ede:
  uVar7 = *(undefined2 *)((int)param_1 + 0x66);
  puVar10 = (undefined2 *)(*(int *)local_c + 4);
  lVar8 = *plVar13;
  uVar17 = (undefined2)((ulong)lVar8 >> 0x10);
  puVar16 = (undefined2 *)((int)lVar8 + 4);
  for (uVar12 = (uint)*(byte *)(*(int *)local_c + 3) * 0x12 >> 1; uVar12 != 0; uVar12 = uVar12 - 1)
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
  lVar8 = *plVar13;
  *(undefined *)((int)lVar8 + 3) = *(undefined *)((int)*local_c + 3);
  return 1;
}



void __cdecl16far FUN_1010_0f26(int param_1,uint param_2,undefined4 *param_3)

{
  if (param_1 == 2) {
    FUN_1010_0cda(param_2,param_3);
    return;
  }
  FUN_1010_02b0(param_2,param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __cdecl16far FUN_1010_0f50(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int **ppiVar5;
  int unaff_SS;
  bool bVar6;
  int local_8;
  undefined4 *local_6;
  uint local_4;

  if (0 < (int)PTR_DAT_10a8_0000_10a8_83c6) {
    local_8 = 0;
    if ((int)PTR_DAT_10a8_0000_10a8_83c6 < 1) {
      local_8 = 0;
      unaff_SS = (int)s_From___s_c_c_10a8_10a2 + 6;
    }
    else {
      ppiVar5 = (int **)_PTR_DAT_10a8_0000_10a8_006e;
      do {
        piVar3 = *ppiVar5;
        local_4 = (uint)((ulong)piVar3 >> 0x10);
        local_6 = (undefined4 *)piVar3;
        if (((local_4 | (uint)local_6) == 0) ||
           ((((*(int *)((int)local_6 + 6) == param_1 && (*piVar3 != param_4)) &&
             ((param_4 == -1 || (local_6[2] == *(long *)&PTR_DAT_10a8_0000_10a8_7b48)))) &&
            (bVar6 = param_2 == 0, param_2 = param_2 + -1, bVar6)))) break;
        ppiVar5 = ppiVar5 + 1;
        local_8 = local_8 + 1;
        piVar3 = (int *)&PTR_DAT_10a8_0000_10a8_83c6;
      } while (*piVar3 != local_8 && local_8 <= *piVar3);
    }
    if ((local_8 != *(int *)&PTR_DAT_10a8_0000_10a8_83c6) && (param_3 != (undefined4 *)0x0)) {
      for (iVar4 = 0x1d; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = param_3;
        param_3 = param_3 + 1;
        puVar1 = local_6;
        local_6 = local_6 + 1;
        *puVar2 = *puVar1;
      }
    }
    if (local_8 != *(int *)&PTR_DAT_10a8_0000_10a8_83c6) {
      return 1;
    }
  }
  return 0;
}



undefined2 __cdecl16far FUN_1010_0ffa(uint param_1)

{
  undefined2 uVar1;
  VA_LIST16 unaff_SS;
  undefined local_2c;
  uint local_6;
  undefined *local_4;

  local_6 = param_1;
  FUN_1010_0c48(param_1 & 0x7fff);
  param_1 = param_1 & 0x7fff;
  local_4 = (undefined *)(((param_1 >> 8 & 0x1e) << 8) >> 9);
  local_6 = local_6 & 0x1ff;
  if (local_4 == PTR_DAT_10a8_0001_10a8_00c0) {
    local_2c = 0;
  }
  else {
    uVar1 = FUN_1010_0792((int)local_4,0,0,0,0,0);
    _WSPRINTF((int16 *)&local_2c,(LPSTR)CONCAT22(0x6ba,unaff_SS),(LPCSTR)CONCAT22(uVar1,0x10a8),
              (VA_LIST16)((int)s_From___s_c_c_10a8_10a2 + 6));
  }
  _WSPRINTF((int16 *)&DAT_10a8_86de,(LPSTR)0x6be10a8,(LPCSTR)CONCAT22(&local_2c,0x10a8),unaff_SS);
  return (int)&DAT_10a8_86de;
}

