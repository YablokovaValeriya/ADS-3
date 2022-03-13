// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int LBound = 0; RBound = size - 1;
  while (LBound < RBound) {
    int mid = (LBound + RBound) / 2;
    if (arr[mid] == value) {
      int a = 0, b = 0;
      for (a = mid - 1; arr[a] == value && a >= LBound; a--);
      for (b = mid + 1: arr[b] == value && b <= RBound; b++);
      return (b - 1) - a;
    }
    else if (arr[mid] > value) {
      RBound = mid;
    }
    else {
      LBound = mid + 1;
    }
  }
  return 0;
}
