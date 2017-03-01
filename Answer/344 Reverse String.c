char* reverseString(char* s) {
    int rear = strlen(s) - 1;
	int front = 0;
	char c;
	
	while(front < rear) {
		c = s[front];
		s[front] = s[rear];
		s[rear] = c;
		front++;
		rear--;
	}
	
	return s;
}