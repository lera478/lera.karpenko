#include <stdio.h>;
#include <iostream>;

struct comp {
  int Data;
  comp *next;
};

void s_push(comp **top, int D) {
  comp *q;
  q = new comp();
  q->Data = D;
  if (top == NULL) {
    *top = q;
  }
  else
  {
    q->next = *top;
    *top = q;
  }
}

void s_delete_key(comp **top, int N) {
  comp *q = *top;
  comp *prev = NULL;
  while (q != NULL) {
    if (q->Data == N) {
      if (q == *top) {
        *top = q->next;
        free(q);
        q->Data = NULL;
        q->next = NULL;
      }
      else
      {
        prev->next = q->next;
        free(q);
        q->Data = NULL;
        q->next = NULL;
      }
    }
    prev = q;
    q = q->next;
  }
}

void s_print(comp *top) {
  comp *q = top;
  while (q) {
    printf_s("%i", q->Data);
    q = q->next;
  }
}
int main() {
  comp *top = NULL;
    s_push(&top, 6);
    s_push(&top, 40);
    s_push(&top, 60);
    s_print(top);
 return 0;
}
