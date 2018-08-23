.PHONY: clean All

All:
	@echo "----------Building project:[ lab1_2 - Debug ]----------"
	@cd "lab1_2" && "$(MAKE)" -f  "lab1_2.mk"
clean:
	@echo "----------Cleaning project:[ lab1_2 - Debug ]----------"
	@cd "lab1_2" && "$(MAKE)" -f  "lab1_2.mk" clean
