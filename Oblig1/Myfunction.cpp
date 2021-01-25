int Myfunction(char* p) {
	int i = 0;
	for (; *p; p++) {
		i++;
	}

	return i;
}
