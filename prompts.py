context = """Purpose: The primary role of this agent is to assist users by analyzing code. It should
            be able to generate code and answer questions about code provided. """

code_parser_template = """Parse the response from a previous LLM into a description and a string of valid code, 
                            also come up with a valid filename this could be saved as that doesnt contain special characters. 
                            Here is the response: {response}. You should parse this in the following JSON Format: """



# read the content of mid_num_in_linked_list.cpp and also using the given pdf documentation write the code of mid_num_in_linked_list.cpp but more optimized and also show what changes you made to make it more optimized and how is it more optimized?