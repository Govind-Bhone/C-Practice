.PHONY: clean All

All:
	@echo "----------Building project:[ ObjectOrientedProgramming - Debug ]----------"
	@cd "ObjectOrientedProgramming" && "$(MAKE)" -f  "ObjectOrientedProgramming.mk"
clean:
	@echo "----------Cleaning project:[ ObjectOrientedProgramming - Debug ]----------"
	@cd "ObjectOrientedProgramming" && "$(MAKE)" -f  "ObjectOrientedProgramming.mk" clean
