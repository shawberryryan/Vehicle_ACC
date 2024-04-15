function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["rs"] = {file: "N:\\project\\path_data.c",
	size: 1984};
	 this.metricsArray.fcn["ahead_logic_Outputs_wrapper"] = {file: "N:\\project\\ahead_logic_wrapper.c",
	stack: 12,
	stackTotal: 12};
	 this.metricsArray.fcn["cos"] = {file: "C:\\Program Files\\MATLAB\\R2022b\\polyspace\\verifier\\cxx\\include\\include-libc\\bits\\mathcalls.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["model_Outputs_wrapper"] = {file: "N:\\project\\model_wrapper.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["sin"] = {file: "C:\\Program Files\\MATLAB\\R2022b\\polyspace\\verifier\\cxx\\include\\include-libc\\bits\\mathcalls.h",
	stack: 0,
	stackTotal: 0};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data; }; 
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'Final_project_template_metrics\'});">Global Memory: 1984(bytes) Maximum Stack: 12(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
