all: angle sine cosine collect

sine:
	gcc calc_sine.c -o calc_sine -lm

cosine:
	gcc calc_cosine.c -o calc_cosine -lm

collect:
	gcc collect.c -o collect

angle:
	gcc random_angle.c -o random_angle

clean:
	rm random_angle collect calc_cosine calc_sine angle.txt cosineresult.txt sineresult.txt trigonometry.txt

cleancondor:
	rm *.dag.* *.txt log_* err_* calc_sine calc_cosine collect random_angle

run:
	./random_angle
	./calc_cosine
	./calc_sine
	./collect

echodag: echo
	@echo ''
	cat trigonometry.txt

echo:
	cat angle.txt
	@echo ''
	cat cosineresult.txt
	@echo ''
	cat sineresult.txt