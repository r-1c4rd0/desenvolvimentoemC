<!-- COMEÇA A LINHA QUE FOI INCLUSO COM O INTUITO DE MUDAR O LOGOTIPO DA EMPRESA 
			<a class="navbar-brand logo" href="https://jobs.solides.com/perkonssa">
            <img src="https://jobs.solides.com/assets/img/logos_empresas/logo__vcnaperkons.png" alt="" style="max-height: 38px; padding-top: 5px;">
            <div class="ripple-container"><div class="ripple ripple-on ripple-out" style="left: 143px; top: 24px; background-color: rgb(94, 94, 94); transform: scale(19.875);">
            </div></div></a>-->

<%@page
	import="com.neomind.fusion.custom.servicos.helpers.WorkflowHelper"%>
<%@page import="com.neomind.fusion.workflow.UserActivity"%>
<%@page import="com.neomind.fusion.workflow.Activity"%>
<%@page import="com.neomind.fusion.workflow.simulation.WorkflowService"%>
<%@page import="com.neomind.fusion.workflow.TaskInstanceHelper"%>
<%@page import="com.neomind.fusion.engine.runtime.RuntimeEngine"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>

<%@page import="com.neomind.fusion.persist.PersistEngine"%>
<%@page import="com.neomind.fusion.persist.QLEqualsFilter"%>
<%@page import="com.neomind.util.NeoUtils"%>
<%@page import="com.neomind.fusion.portal.PortalUtil"%>
<%@page import="com.neomind.fusion.common.NeoObject"%>
<%@page import="com.neomind.fusion.workflow.adapter.AdapterUtils"%>
<%@page import="com.neomind.fusion.entity.EntityWrapper"%>
<%@page import="com.neomind.fusion.workflow.WFProcess"%>
<%@page import="com.neomind.fusion.workflow.model.ProcessModel"%>
<%@page import="com.neomind.fusion.security.NeoUser"%>
<%@page import="com.neomind.fusion.workflow.TaskInstance"%>
<%@page import="com.neomind.fusion.workflow.TaskSummary"%>
<%@page import="java.util.List"%>
<%@page import="com.neomind.fusion.security.SecurityEngine"%>

<%@page
	import="com.neomind.fusion.custom.servicos.helpers.WorkflowHelper"%>

<html lang="pt-br">
<head>

<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Registro de Fornecedor</title>
<link rel="shortcut icon" href="http://www.perkons.com/favicon.ico"
	type="image/x-icon">
<link rel="stylesheet" type="text/css"
	href="<%=PortalUtil.getBaseURL()%>appfusion/assets/css/neo-bootstrap.css">


</head>

<%
	String setor = request.getParameter("setor");
	String nome = request.getParameter("nome");
	String mail = request.getParameter("mail");
	String telefone = request.getParameter("telefone");
	String msge = request.getParameter("msge");
%>

<!-- https://getbootstrap.com/docs/3.3/css/#forms -->

<body bgcolor="#F7FE2E">

	<table align="center" cellspacing="2" cellpadding="2" border="1">
		<!-- <table backgroud="">  -->
		<div class="container-fluid">
			<div class="panel panel-default">
				<tbody>
					<tr>
						<td colspan="4" align="center" bgcolor="aaaaaa"><div
								class="panel-heading"></div>
							<div class="panel-body">
								<h1>
									<strong> <a class="navbar-brand logo"
										href="https://jobs.solides.com/perkonssa"> <img
											src="https://jobs.solides.com/assets/img/logos_empresas/logo__vcnaperkons.png"
											alt="" style="max-height: 38px; padding-top: 5px;">
											<div class="ripple-container">
												<div class="ripple ripple-on ripple-out"
													style="left: 143px; top: 24px; background-color: rgb(94, 94, 94); transform: scale(19.875);">
												</div>
											</div></a> Tratamento de Anomalia
									</strong>
								</h1>
								</font>
								<h3>Preencha o formulário de tratamento anomalia</h3>
					<!-- <form name="formulariocontato" id="formulariocontato" method="post" action="http://poc03.lecom.com.br/bpm/app/public/orcamentoSite"> -->
					<form name="formulariocontato" id="formulariocontato" method="post">
					</td>



						<div class="panel-heading">
							<h1></h1>
						</div>
						<div class="panel-body">
							</td>
					</tr>
					
						<tr bgcolor="aaaaaa">
							<td colspan="4" align="center" bgcolor="aaaaaa"><select id="setor" name="setor"
								style="width: 100%; border: 0px; height: 30px;">
									<option value="1">Anomalia Produto</option>
									<option value="2">Anomalia Serviços</option>
									<option value="3">Retrabalho de anomalia Produtos</option>
									<option value="4">Retrabalho de anomalia Serviço</option>
							</select></td>
						</tr>
						<tr bgcolor="aaaaaa">
							<td><label>Nome&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp</label> <input type="text"
								class="form-control" id="nome" name="nome" maxlength="100" /></td>
							<td align="center"></td>
							<td align="center">Tempo estimado</td>
							<td align="center">Responsável</td>
						</tr>						
						<tr>
								<!-- &nbsp código utilizado para inserir espaços na formatação da página HTML -->
							<td><label>E-mail&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp </label> <input type="text"
								class="form-control" id="mail" name="mail" maxlength="100" /></td>
							<td align="center"></td>
							<td align="center">x dias</td>
							<td align="center">Ricardo Santiago</td>
						</tr>
						<tr>
							<td><label>Telefone&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp</label> <input type="text"
								class="form-control" id="telefone" name="telefone"
								maxlength="100" /></td>
							<td align="center">50</td>
							<td rowspan="2" colspan="2" align="center" bgcolor="red">0</td>
						</tr>
						<tr>
							<td><label>Tratamento da Anomalia&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp</label> <textarea
									name="msge" class="form-control" id="msge" maxlength="10000"></textarea></td>
							<td align="center" >10</td>
						</tr>
						<tr>
							<td>
							<br> <br> <br> <input type="submit"
							class="btn btn-default" id="enviar" value="ENVIAR" />
					</form><span id="status2"></span>
			</div>
			<div class="panel-footer">
				<div id="contatob">
					<h3>Contato</h3>
					<p>O Preenchimento deste formulário é obrigatório, em caso de não acessar a atividade entre em contato </p>
				</div>
						</td>
						</tr>
					
			</div>
		</div>
		</div>

		<div id="toTop" data-role="footer" data-position="fixed">
			
		</div>

		<link href='http://fonts.googleapis.com/css?family=Roboto:400,300'
			rel='stylesheet' type='text/css'>

		<script src="js/jquery.js"></script>
		<script src="js/parallax.min.js"></script>

		<script type="text/javascript"
			src="http://www.recassessoria.com.br/recassessoria.com.br/teste/js/jquery.smooth-scroll.min.js"></script>
		<script type="text/javascript"
			src="http://www.recassessoria.com.br/recassessoria.com.br/teste/js/jquery.maskedinput.js"></script>
		<script type="text/javascript"
			src="http://www.recassessoria.com.br/recassessoria.com.br/teste/js/jquery.validate.js"></script>

		<script src="js/base.js"></script>

		<%
			if (request.getMethod().equalsIgnoreCase("POST")) {

				WFProcess wfProces = null;

				NeoObject formTeste = AdapterUtils.createNewEntityInstance("wkfOrcamentoDiprotec");
				EntityWrapper wrapperFormTeste = new EntityWrapper(formTeste);
				wrapperFormTeste.findField("email").setValue(mail);
				wrapperFormTeste.findField("nome").setValue(nome);
				wrapperFormTeste.findField("telefone").setValue(telefone);
				wrapperFormTeste.findField("solucao").setValue(msge);

				NeoObject o = PersistEngine.getObject(AdapterUtils.getEntityClass("setorDiprotec"),
						new QLEqualsFilter("idSetor", NeoUtils.safeLong(request.getParameter("idsetor"))));
				wrapperFormTeste.findField("setor").setValue(o);
				NeoObject ob = PersistEngine.getObject(AdapterUtils.getEntityClass("diproTecSetorXUsuarios"),
						new QLEqualsFilter("setor.idSetor", NeoUtils.safeLong(request.getParameter("setor"))));
				wrapperFormTeste.findField("setorEResp").setValue(ob);

				PersistEngine.persist(formTeste);
				//Pego o modelo do processo
				ProcessModel processModel = (ProcessModel) PersistEngine.getObject(ProcessModel.class,
						new QLEqualsFilter("name", "Workflow Orçamento Diprotec"));

				//Buscar um usuário específico
				NeoUser user = SecurityEngine.getInstance().getUser("adm");

				//Inicio o processo com o eform principal sendo o registro do eform que tem o converter
				//e que acabou de ser inserido (ao clicar no OK)
				//WFProcess proc = processModel.startProcess(formTeste, false, null, null,null,null,user);

				WorkflowHelper wfHelp = new WorkflowHelper();
				WFProcess proc = wfHelp.iniciaProcesso(processModel, formTeste, false, user, true);
		%>
		<script> alert("Processo <%= proc.getCode() %> iniciado com sucesso"); location="portal.jsp"; </script>
		<% 
		}
     %>
		<!--  </table> -->



		</tbody>
	</table>
</body>

</html>
