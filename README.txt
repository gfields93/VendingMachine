Planning out all the states:
	1.Start state where no money has been entered
		-on refund - no change
		-on nickel - travel to two
		-on dime - travel to two
		-on quarter - travel to two
		-on dollar - travel to three
		-on letter or number, travel to 9
	2.Money has been entered but <.50; nothing purchasable
		-on refund, travel to 8
		-on nickel, if >.50 travel nowhere, if <=.50 travel to 3
		-on dime, if >.50 travel nowhere, if <=.50 travek to 3
		-on quarter, if >.50 travel nowhere, if <=.50 travel to 3
		-on dollar, travel to 4
		-on letter or dollar, travel to 9
	3.between >= .50 but <1.00; tier 1 items purchaseable
		-on refund, travel to 8
		-on nickel, if <1.00 travel nowhere, if >=1.00 travel to 4
		-on dime, if <1.00 travel nowhere, if >=1.00 travel to 4
		-on quarter, if <1.00 travel nowhere, if >=1.00 travel to 4
		-on letter A travel to 6
		-on others, travel to 9
	4.between >= 1.00 but <1.50; tier 2 items purchaseable
		-on refund travel to 8
		-on nickel, if >1.50 then travel nowhere, else travel to 5
		-on dime, if >1.50 then travel nowhare, else travel to 5
		-on quarter, if >1.50 then travel nowhere, else travel to 5
		-on dollar, travel to 5
		-on letter A or B, then travel to 6
		-on others, travel to 9
	5.>= 1.50; all items purchasable
		-on refund travek to 8
		-on all amounts, travel nowhere
		-on letter A, B, or C, travel to 6
		-on others travel to 9
	6.input number
		-on refund, travel to 8
		-on all amounts, ignore and travel nowhere
		-on letters ignore and travel nowhere
		-on numbers travel to 7
	7.wait for item to be outputted
		-ignores all inputs
	8.refund state; either if user canceled or user has left over money
		-travel to 1
	9. error state; user has done something wrong
		-travel to previous state
